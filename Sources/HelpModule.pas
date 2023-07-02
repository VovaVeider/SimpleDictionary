Unit HelpModule;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure CloseBtn_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource HelpModule.Form1.resources}
    HelpBox: RichTextBox;
    CloseBtn: Button;
    {$include HelpModule.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
      self.HelpBox.LoadFile('help.rtf');
    end;
  end;

implementation

procedure Form1.CloseBtn_Click(sender: Object; e: EventArgs);
begin
  self.Close();
end;

end.
