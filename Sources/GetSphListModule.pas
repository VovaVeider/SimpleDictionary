Unit GetSphListModule;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure OKBtn_Click(sender: Object; e: EventArgs);
    procedure BackBtn_Click(sender: Object; e: EventArgs);
    procedure SphCheckList_SelectedIndexChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource GetSphListModule.Form1.resources}
    SphCheckList: CheckedListBox;
    BackBtn: Button;
    OKBtn: Button;
    {$include GetSphListModule.Form1.inc}
  {$endregion FormDesigner}
  public
    Res: List<string>;
    constructor(sphlst,selectedsph:List<string>);
    begin
      Res:=new List<string>;
      InitializeComponent;
      SphCheckList.DataSource:=sphlst;
      for var i:=0 to SphCheckList.Items.Count-1 do begin
        if SphCheckList.Items[i].ToString in selectedsph then
          SphCheckList.SetItemChecked(i,true);
      end;
    end;
  end;

implementation

procedure Form1.OKBtn_Click(sender: Object; e: EventArgs);
begin
  foreach x:integer in sphChecklist.CheckedIndices  do
  begin
    Res.Add(sphChecklist.Items[x].ToString);
    self.DialogResult:=System.Windows.Forms.DialogResult.OK;
  end;
  self.Close();
end;

procedure Form1.BackBtn_Click(sender: Object; e: EventArgs);
begin
  self.Close();
end;

procedure Form1.SphCheckList_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  
end;

end.
