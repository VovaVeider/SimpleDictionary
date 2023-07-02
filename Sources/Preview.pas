//Код приветственного окна
Unit Preview;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure label3_Click(sender: Object; e: EventArgs);
    procedure panel1_Paint(sender: Object; e: PaintEventArgs);
    procedure HelpBtn_Click(sender: Object; e: EventArgs);
    procedure NextBtn_Click(sender: Object; e: EventArgs);
    procedure BackBtn_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Preview.Form1.resources}
    HelpBtn: Button;
    NextBtn: Button;
    label3: &Label;
    label4: &Label;
    HelloPanel: Panel;
    label1: &Label;
    panel1: Panel;
    BackBtn: Button;
    richTextBox1: RichTextBox;
    label2: &Label;
    {$include Preview.Form1.inc}
  {$endregion FormDesigner}
  public
    ok:boolean;
    constructor;
    begin
      self.ok:=false;
      InitializeComponent;
      BackBtn.Click+=BackBtn_Click;
      richTextBox1.LoadFile('help.rtf');
      self.panel1.Visible:=False;
      self.PANEL1.Dock:=System.Windows.Forms.DockStyle.Fill; 
      self.HelloPanel.Dock:=System.Windows.Forms.DockStyle.Fill; 
    end;
  end;

implementation

procedure Form1.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.label3_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.panel1_Paint(sender: Object; e: PaintEventArgs);
begin
  
end;

procedure Form1.HelpBtn_Click(sender: Object; e: EventArgs);
begin
 self.HelloPanel.Visible:=False;
 self.panel1.Visible:=True;
end;

procedure Form1.NextBtn_Click(sender: Object; e: EventArgs);
begin
  Self.ok:=true;
  self.Close();
end;

procedure Form1.BackBtn_Click(sender: Object; e: EventArgs);
begin
 self.HelloPanel.Visible:=True;
 self.panel1.Visible:=False;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
 
end;

end.
