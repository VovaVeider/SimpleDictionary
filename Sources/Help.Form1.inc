procedure InitializeComponent;
    begin
        self.HelpBox := new System.Windows.Forms.RichTextBox();
        self.CloseBtn := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // HelpBox
        // 
        self.HelpBox.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.HelpBox.Location := new System.Drawing.Point(-1, -2);
        self.HelpBox.MinimumSize := new System.Drawing.Size(300, 300);
        self.HelpBox.Name := 'HelpBox';
        self.HelpBox.ReadOnly := true;
        self.HelpBox.Size := new System.Drawing.Size(336, 335);
        self.HelpBox.TabIndex := 0;
        self.HelpBox.Text := '';
        // 
        // CloseBtn
        // 
        self.CloseBtn.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.CloseBtn.Location := new System.Drawing.Point(207, 339);
        self.CloseBtn.Name := 'CloseBtn';
        self.CloseBtn.Size := new System.Drawing.Size(118, 23);
        self.CloseBtn.TabIndex := 1;
        self.CloseBtn.Text := 'Закрыть справку';
        self.CloseBtn.UseVisualStyleBackColor := true;
        self.CloseBtn.Click += CloseBtn_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(337, 368);
        self.Controls.Add(self.CloseBtn);
        self.Controls.Add(self.HelpBox);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
