//Редактор списка сфер использования
Unit SphEditor;

interface

uses TechDictModule,GetText,System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure AddBtn_Click(sender: Object; e: EventArgs);
    procedure RenameBtn_Click(sender: Object; e: EventArgs);
    procedure delbtn_Click(sender: Object; e: EventArgs);
    procedure BackBtn_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource SphEditor.Form1.resources}
    BackBtn: Button;
    tableLayoutPanel1: TableLayoutPanel;
    AddBtn: Button;
    RenameBtn: Button;
    delbtn: Button;
    SphList: ListBox;
    {$include SphEditor.Form1.inc}
  {$endregion FormDesigner}
  private 
    d:techdict;
  public
    constructor(d:techdict);
    begin
      self.d:=d;
      InitializeComponent;
      sphlist.DataSource:= d.getspheres().ToArray;
    end;
  end;

implementation

procedure Form1.AddBtn_Click(sender: Object; e: EventArgs);
begin
  var get:=new GetText.Form1('Введите имя новой сферы','');
  if get.ShowDialog()<>System.Windows.Forms.DialogResult.OK then
    exit;
  if (get.usertext.Trim(arr(' ')).Length=0) or  not IsStringCorrect(get.usertext) then begin
     MessageBox.Show('Имя сферы использования не может быть пустым(в т.ч содержать одни пробелы)или включать служебные ASCII символы','Ошибочка',MessageBoxButtons.OK);
     exit;
     end;
  if get.usertext in d.getspheres() then begin
    MessageBox.Show('Такая сфера уже есть в словаре','Ошибочка',MessageBoxButtons.OK,MessageBoxIcon.Error,MessageBoxDefaultButton.Button1,MessageBoxOptions.ServiceNotification,False);
    exit;
  end;
  
  d.addsphere(get.usertext);
  self.SphList.DataSource:=d.getspheres();
  
end;

procedure Form1.RenameBtn_Click(sender: Object; e: EventArgs);
begin
  if (sphlist.Items.Count = 0) or (sphlist.SelectedIndex =-1) then
    exit;
  
  var get:=new GetText.Form1('Введите новое имя сферы',sphlist.Items[sphlist.SelectedIndex].ToString);
  
  if get.ShowDialog()<>System.Windows.Forms.DialogResult.OK then
    exit;
  
  if (get.usertext.Trim(arr(' ')).Length=0) or  not IsStringCorrect(get.usertext) then begin
    MessageBox.Show('Имя сферы использования не может быть пустым(в т.ч содержать одни пробелы)или включать служебные ASCII символы','Ошибочка',MessageBoxButtons.OK);
     exit;
     
  end;
  if get.usertext in d.getspheres() then begin
    MessageBox.Show('Такая сфера уже есть в словаре','Ошибочка',MessageBoxButtons.OK);
    exit;
    
  end;
  
  d.editsph(sphlist.Items[sphlist.SelectedIndex].ToString,get.usertext);
  self.SphList.DataSource:=d.getspheres();
  
end;

procedure Form1.delbtn_Click(sender: Object; e: EventArgs);
begin
  if (sphlist.Items.Count = 0) or (sphlist.SelectedIndex =-1) then
    exit;

  d.dellsphere(sphlist.Items[sphlist.SelectedIndex].ToString);
  self.SphList.DataSource:=d.getspheres();

  
end;

procedure Form1.BackBtn_Click(sender: Object; e: EventArgs);
begin
  self.Close();
end;

end.
