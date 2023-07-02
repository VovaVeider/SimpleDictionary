uses MainForm;
begin
  {$apptype windows}
  System.Windows.Forms.Application.EnableVisualStyles();
  System.Windows.Forms.Application.SetCompatibleTextRenderingDefault(false);
  System.Windows.Forms.Application.Run(new MainForm.Form1);
end.
