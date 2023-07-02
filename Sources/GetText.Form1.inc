procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.BackBtn := new System.Windows.Forms.Button();
        self.OKBtn := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Left or System.Windows.Forms.AnchorStyles.Right)));
        self.textBox1.Location := new System.Drawing.Point(12, 47);
        self.textBox1.MaxLength := 200;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(258, 20);
        self.textBox1.TabIndex := 0;
        // 
        // BackBtn
        // 
        self.BackBtn.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.BackBtn.Location := new System.Drawing.Point(194, 95);
        self.BackBtn.Name := 'BackBtn';
        self.BackBtn.Size := new System.Drawing.Size(75, 23);
        self.BackBtn.TabIndex := 1;
        self.BackBtn.Text := 'Назад';
        self.BackBtn.UseVisualStyleBackColor := true;
        self.BackBtn.Click += BackBtn_Click;
        // 
        // OKBtn
        // 
        self.OKBtn.Location := new System.Drawing.Point(13, 95);
        self.OKBtn.Name := 'OKBtn';
        self.OKBtn.Size := new System.Drawing.Size(97, 23);
        self.OKBtn.TabIndex := 2;
        self.OKBtn.Text := 'Подтвердить';
        self.OKBtn.UseVisualStyleBackColor := true;
        self.OKBtn.Click += OKBtn_Click;
        // 
        // label2
        // 
        self.label2.AutoSize := true;
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(100, 13);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(50, 16);
        self.label2.TabIndex := 4;
        self.label2.Text := 'label2';
        self.label2.TextAlign := System.Drawing.ContentAlignment.MiddleCenter;
        // 
        // Form1
        // 
        self.AutoSize := true;
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.None;
        self.ClientSize := new System.Drawing.Size(282, 130);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.OKBtn);
        self.Controls.Add(self.BackBtn);
        self.Controls.Add(self.textBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.Fixed3D;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterParent;
        self.Load += Form1_Load;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
