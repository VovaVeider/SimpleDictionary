Unit GetText;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure OKBtn_Click(sender: Object; e: EventArgs);
    procedure BackBtn_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource GetText.Form1.resources}
    textBox1: TextBox;
    BackBtn: Button;
    OKBtn: Button;
    label2: &Label;
    {$include GetText.Form1.inc}
  {$endregion FormDesigner}
  public
    usertext:string;
    constructor(Caption,starttext:string);
    begin
      InitializeComponent;    
      label2.Text:=caption;
      textbox1.Text:=starttext;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.OKBtn_Click(sender: Object; e: EventArgs);
begin
  self.UserText:=textbox1.text;
  self.DialogResult:=System.Windows.Forms.dialogresult.OK;
  self.Close();
end;

procedure Form1.BackBtn_Click(sender: Object; e: EventArgs);
begin
  self.DialogResult:=System.Windows.Forms.dialogresult.Cancel;
  self.close();
end;

end.
