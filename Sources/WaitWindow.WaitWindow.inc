procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(53, 21);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(226, 20);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Идёт выполнение операции ';
        self.label1.Click += label1_Click;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(53, 41);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(290, 23);
        self.label2.TabIndex := 1;
        self.label2.Text := 'пожалуйста подождите';
        self.label2.Click += label2_Click;
        // 
        // WaitWindow
        // 
        self.BackColor := System.Drawing.SystemColors.ControlLight;
        self.ClientSize := new System.Drawing.Size(356, 96);
        self.ControlBox := false;
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedDialog;
        self.Name := 'WaitWindow';
        self.Text := 'Окно ожидания';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
