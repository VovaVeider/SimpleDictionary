// Форма для создания или редактирования карточки в словаре
Unit EditAddWordForm;

interface
{$reference PresentationFramework.dll}
uses TechDictModule,System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure BackBut_Click(sender: Object; e: EventArgs);
    procedure AddEditBut_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource EditAddWordForm.Form1.resources}
    tableLayoutPanel1: TableLayoutPanel;
    label1: &Label;
    label2: &Label;
    SphList: CheckedListBox;
    label3: &Label;
    DefineBox: TextBox;
    label4: &Label;
    UseBox: TextBox;
    label5: &Label;
    SynTextBox: TextBox;
    BackBut: Button;
    AddEditBut: Button;
    button1: Button;
    WrdTextBox: TextBox;
    {$include EditAddWordForm.Form1.inc}
  {$endregion FormDesigner}
  private
  d:TechDict;
  wrd:string;
  edit:boolean;
  public
    constructor(d:TechDict;edit:boolean:=False;wrd :string:='');
    begin
      InitializeComponent;
      self.d:=d;
      self.edit:=edit;
      self.wrd:=wrd;
      sphlist.DataSource:=d.getspheres();
      if edit then begin
        wrdtextbox.Text:=wrd;
        wrdtextbox.Enabled:=False;
        var art:= d.find(wrd);
        for var i:=0 to sphlist.Items.Count-1 do begin
          if sphlist.Items[i].ToString in art.spheres then
            sphlist.SetItemChecked(i,True);
        end;
      DefineBox.Text:=art.define;
      UseBox.Text:=art.use;
      SynTextBox.text:=art.synonims;
      AddEditBut.Text:='Изменить';
      end;
    end;
  end;

implementation

procedure Form1.BackBut_Click(sender: Object; e: EventArgs);
begin
  self.Close();
end;

procedure Form1.AddEditBut_Click(sender: Object; e: EventArgs);
begin
  if ((wrdtextbox.Text.Trim(arr(' ')).Length=0) or not IsStringCorrect(wrdtextbox.Text))then begin
     MessageBox.Show('Слово не может быть пустой строкой(содержать только пробелы),или включать служебные ASCII символы','Сообщение',MessageBoxButtons.OK);
     exit;
  end;
  if not edit then begin
    if d.indict(wrdtextbox.Text) then begin
      if MessageBox.Show('Уже есть в словаре такое слово.Хотите его перезаписать?','Сообщение',MessageBoxButtons.YesNo) <>System.Windows.Forms.DialogResult.Yes then
        exit;
       end;
   end;
    var art:= new article ();
    art.define:=DefineBox.Text;
    art.synonims:= SynTextBox.Text;
    art.use:=  UseBox.text;
    var sph:array of string;
    setlength(sph,sphlist.CheckedIndices.Count);
    for var i:=0 to sphlist.CheckedIndices.Count-1 do begin
      sph[i]:=sphlist.Items[sphlist.CheckedIndices[i]].ToString;
    end;
    art.spheres:=sph;
    d.AddWord(wrdtextbox.Text,art);
    self.Close();
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if not edit then
    wrdtextbox.Clear();
   DefineBox.clear();
   UseBox.clear();
   SynTextBox.clear();
end;

end.
