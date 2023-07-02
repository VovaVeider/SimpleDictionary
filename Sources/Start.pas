uses MainForm,Preview;
begin
  System.Windows.Forms.Application.EnableVisualStyles();
  System.Windows.Forms.Application.SetCompatibleTextRenderingDefault(false);
  var prev:=new Preview.Form1;
  System.Windows.Forms.Application.Run(prev);
  if prev.ok then
    System.Windows.Forms.Application.Run(new MainForm.Form1);
end.
