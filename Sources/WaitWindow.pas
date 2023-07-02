Unit WaitWindow;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  WaitWindow1 = class(Form)
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure label2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource WaitWindow.WaitWindow.resources}
    label2: &Label;
    label1: &Label;
    {$include WaitWindow.WaitWindow.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure WaitWindow1.label1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure WaitWindow1.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

end.
