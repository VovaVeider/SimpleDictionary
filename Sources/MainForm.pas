// Основная форма - главное меню программы
Unit MainForm;

interface
uses techdictmodule;
uses System, System.Drawing, System.Windows.Forms,EditAddWordForm,SphEditor,GetText,MainWindowPanels,HelpModule;

  
    
type
  Form1 = class(Form)
    procedure CreateMenuItem_Click(sender: Object; e: EventArgs);
    procedure LoadMenuItem_Click(sender: Object; e: EventArgs);
    procedure SaveMenuItem_Click(sender: Object; e: EventArgs);
    procedure SaveAsMenuItem_Click(sender: Object; e: EventArgs);
    procedure FileMenuItem_Click(sender: Object; e: EventArgs);
    procedure Info_Click(sender: Object; e: EventArgs);
    procedure AboutProgram_Click(sender: Object; e: EventArgs);
    procedure AddWord_Click(sender: Object; e: EventArgs);
    procedure Spheres_Click(sender: Object; e: EventArgs);
    procedure RenameDict_Click(sender: Object; e: EventArgs);
    procedure tabControl1_MouseDoubleClick(sender: Object; e: MouseEventArgs);
    procedure HelpBtn_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
  {$region FormDesigner}
  internal
    {$resource MainForm.Form1.resources}
    menuStrip1: MenuStrip;
    FileMenuItem: ToolStripMenuItem;
    LoadMenuItem: ToolStripMenuItem;
    CreateMenuItem: ToolStripMenuItem;
    SaveMenuItem: ToolStripMenuItem;
    tabControl1: TabControl;
    Edit: ToolStripMenuItem;
    AddWord: ToolStripMenuItem;
    Spheres: ToolStripMenuItem;
    Info: ToolStripMenuItem;
    HelpBtn: ToolStripMenuItem;
    AboutProgram: ToolStripMenuItem;
    RenameDict: ToolStripMenuItem;
    SaveAsMenuItem: ToolStripMenuItem;
    {$include MainForm.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
      Edit.Enabled:=False;
      SaveMenuItem.Enabled:=False;
      SaveAsMenuItem.Enabled:=False;
    end;
  end;

implementation

      
  
  

procedure Form1.LoadMenuItem_Click(sender: Object; e: EventArgs);
begin
  
  var ld := new OpenFileDialog();
  ld.Multiselect := False;
  ld.Filter := 'Словарь(*.dict)|*.dict';
   if (ld.ShowDialog() = System.Windows.Forms.DialogResult.Ok) then
     begin
        var tab:= new CustomTab(True ,ld.FileName);
        TabControl1.Controls.Add(tab);
        TabControl1.SelectedTab:=tab;
        
        Edit.Enabled:=True;
        SaveMenuItem.Enabled:=True;
        SaveAsMenuItem.Enabled:=True;
      end
 
end;



procedure Form1.SaveAsMenuItem_Click(sender: Object; e: EventArgs);
begin
  var tab:=tabcontrol1.selectedtab as CustomTab;
  var ld := new SaveFileDialog();
  ld.Filter := 'Словарь(*.dict)|*.dict';
   if (ld.ShowDialog() = System.Windows.Forms.DialogResult.Ok) then
     begin
        tab.d.save(ld.FileName);
        tab.saved:=True;
      end
 
  
end;

procedure Form1.FileMenuItem_Click(sender: Object; e: EventArgs);
begin
  
end;
procedure Form1.CreateMenuItem_Click(sender: Object; e: EventArgs);
begin
  var tab:= new CustomTab(False);
  
  TabControl1.Controls.Add(tab);
  TabControl1.SelectedTab:=tab;
  Edit.Enabled:=True;
  SaveMenuItem.Enabled:=True;
  SaveAsMenuItem.Enabled:=True;
  AddWord.Enabled:=tRUE;
end;
procedure Form1.AboutProgram_Click(sender: Object; e: EventArgs);
  begin
  MessageBox.Show('Словарь '+chr(10)+chr(13)+'Разработчик VovaVeider : https://github.com/VovaVeider/SimpleDictionary', 'О программе');
  end;
procedure Form1.Info_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.AddWord_Click(sender: Object; e: EventArgs);
begin
  var SelTab :=TabControl1.SelectedTab as CustomTab;
  var addform:=new EditAddWordForm.Form1(selTab.d,False);
  addform.ShowDialog();
end;

procedure Form1.Spheres_Click(sender: Object; e: EventArgs);
begin
  if tabcontrol1.SelectedIndex=-1 then
    exit;
  var tab:= tabcontrol1.SelectedTab as CustomTab;
  var sphedit:=new SphEditor.Form1(tab.d);
  sphedit.ShowDialog();
end;

procedure Form1.RenameDict_Click(sender: Object; e: EventArgs);
begin
  if tabcontrol1.SelectedIndex<>-1 then begin
    var get:= new GetText.Form1('Введите имя словаря','');
    if get.ShowDialog<>System.Windows.Forms.DialogResult.OK then
      exit;
    if  not(IsStringCorrect(get.usertext) and (get.usertext.Trim(arr(' ')).Length<>0)) then begin
      MessageBox.Show('Имя словаря не может быть пустой строкой(содержыть только пробелы),или включать служебные ASCII символы','Ошибочка....',MessageBoxButtons.OK);
      exit;
    end;
    tabcontrol1.SelectedTab.Text:=get.usertext;
    var z:=tabcontrol1.SelectedTab as CustomTab;
    z.SetDictName(get.UserText);
  end;
end;

procedure Form1.SaveMenuItem_Click(sender: Object; e: EventArgs);
begin
  var tab:=tabcontrol1.selectedtab as CustomTab;
  if tab.saved then begin
    exit;
    end;
  if tab.path<>''then
    tab.d.save(tab.path)
  else begin
  var ld := new SaveFileDialog();
  ld.Filter := 'Словарь(*.dict)|*.dict';
   if (ld.ShowDialog() = System.Windows.Forms.DialogResult.Ok) then
     begin
        tab.d.save(ld.FileName);
        tab.saved:=True;
        tab.path:=ld.FileName;
      end
 
  end;
end;

procedure Form1.tabControl1_MouseDoubleClick(sender: Object; e: MouseEventArgs);
begin
  if (tabcontrol1.TabCount=0) or (e.Button<>System.Windows.Forms.MouseButtons.Right) then
    exit;
  for var i:=0  to tabcontrol1.TabCount-1 do begin
    if tabcontrol1.GetTabRect(i).Contains(e.Location) then begin
      IF MessageBox.Show('Вы точно хотите закрыть словарь?','Закрытие вкладки',MessageBoxbUTTONS.YesNo)=System.Windows.Forms.DialogResult.No THEN
        exit;
      var tab:=tabcontrol1.TabPages[i] as CustomTab;
      if tab.saved then 
        tabcontrol1.TabPages.Remove(tab as TabPage)
      else begin
       if MessageBox.Show('Словарь не сохранён.Точно хотите закрыть?','Закрытие вкладки',MessageBoxbUTTONS.YesNo)=System.Windows.Forms.DialogResult.Yes THEN
        tabcontrol1.TabPages.Remove(tab as TabPage)
        else
          exit;
    
  end;
  end;
  end;
  if tabcontrol1.TabCount=0 then begin
      Edit.Enabled:=False;
      SaveMenuItem.Enabled:=False;
      SaveAsMenuItem.Enabled:=False;
  end;
    
end;

procedure Form1.HelpBtn_Click(sender: Object; e: EventArgs);
begin
  var hlp:= new Helpmodule.Form1();
  hlp.ShowDialog();
  end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  if MessageBox.Show('Вы точно хотите закрыть программу?','Закрытие программы',MessageBoxbUTTONS.YesNo)=System.Windows.Forms.DialogResult.No then 
    begin
    e.Cancel:=True;
    exit;
    end;
  for var i:=0  to tabcontrol1.TabCount-1 do begin
    var tab:= tabcontrol1.TabPages[i] as customtab ;
    if not tab.saved then begin
      IF MessageBox.Show('Есть словарь с несохранённными изменениями.Хотите перейти к нему вместо выхода?Иначе несохр. инф-ция будет потеряна','Несохранён словарь',MessageBoxbUTTONS.YesNo)=System.Windows.Forms.DialogResult.Yes THEN
        begin
        e.Cancel:=True;
        tabcontrol1.SelectedTab:=tab as TabPage;
        end
       
    
     
    end;
  end;

end;

end.
