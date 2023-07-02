procedure InitializeComponent;
    begin
        self.HelpBtn := new System.Windows.Forms.Button();
        self.NextBtn := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.HelloPanel := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.panel1 := new System.Windows.Forms.Panel();
        self.BackBtn := new System.Windows.Forms.Button();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        self.HelloPanel.SuspendLayout();
        self.panel1.SuspendLayout();
        self.SuspendLayout();
        // 
        // HelpBtn
        // 
        self.HelpBtn.Location := new System.Drawing.Point(3, 453);
        self.HelpBtn.Name := 'HelpBtn';
        self.HelpBtn.Size := new System.Drawing.Size(103, 23);
        self.HelpBtn.TabIndex := 0;
        self.HelpBtn.Text := 'Справка';
        self.HelpBtn.UseVisualStyleBackColor := true;
        self.HelpBtn.Click += HelpBtn_Click;
        // 
        // NextBtn
        // 
        self.NextBtn.Location := new System.Drawing.Point(315, 453);
        self.NextBtn.Name := 'NextBtn';
        self.NextBtn.Size := new System.Drawing.Size(75, 23);
        self.NextBtn.TabIndex := 1;
        self.NextBtn.Text := 'Далее';
        self.NextBtn.UseVisualStyleBackColor := true;
        self.NextBtn.Click += NextBtn_Click;
        // 
        // label2
        // 
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.ForeColor := System.Drawing.Color.Purple;
        self.label2.Location := new System.Drawing.Point(28, 50);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(339, 23);
        self.label2.TabIndex := 3;
        self.label2.Text := '"Словарь технических терминов"';
        // 
        // label3
        // 
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(196, 314);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(194, 23);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Выполнил ст гр 146';
        // 
        // label4
        // 
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(276, 352);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(129, 23);
        self.label4.TabIndex := 5;
        self.label4.Text := 'Vova Veider';
        self.label4.Click += label4_Click;
        // 
        // HelloPanel
        // 
        self.HelloPanel.Controls.Add(self.label1);
        self.HelloPanel.Controls.Add(self.label2);
        self.HelloPanel.Controls.Add(self.HelpBtn);
        self.HelloPanel.Controls.Add(self.NextBtn);
        self.HelloPanel.Controls.Add(self.label4);
        self.HelloPanel.Controls.Add(self.label3);
        self.HelloPanel.Location := new System.Drawing.Point(-8, 0);
        self.HelloPanel.Name := 'HelloPanel';
        self.HelloPanel.Size := new System.Drawing.Size(516, 485);
        self.HelloPanel.TabIndex := 6;
        // 
        // label1
        // 
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 20.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.Purple;
        self.label1.Location := new System.Drawing.Point(18, 8);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(387, 41);
        self.label1.TabIndex := 6;
        self.label1.Text := 'Курсовая работа на тему 2.7';
        // 
        // panel1
        // 
        self.panel1.Controls.Add(self.BackBtn);
        self.panel1.Controls.Add(self.richTextBox1);
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(159, 485);
        self.panel1.TabIndex := 8;
        // 
        // BackBtn
        // 
        self.BackBtn.Location := new System.Drawing.Point(9, 8);
        self.BackBtn.Name := 'BackBtn';
        self.BackBtn.Size := new System.Drawing.Size(75, 23);
        self.BackBtn.TabIndex := 1;
        self.BackBtn.Text := 'Назад';
        self.BackBtn.UseVisualStyleBackColor := true;
        self.BackBtn.Click += BackBtn_Click;
        // 
        // richTextBox1
        // 
        self.richTextBox1.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.richTextBox1.Location := new System.Drawing.Point(0, 37);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.Size := new System.Drawing.Size(159, 445);
        self.richTextBox1.TabIndex := 0;
        self.richTextBox1.Text := '';
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.GradientInactiveCaption;
        self.ClientSize := new System.Drawing.Size(402, 488);
        self.Controls.Add(self.panel1);
        self.Controls.Add(self.HelloPanel);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.Fixed3D;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Приветственное окно';
        self.Load += Form1_Load;
        self.HelloPanel.ResumeLayout(false);
        self.panel1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
