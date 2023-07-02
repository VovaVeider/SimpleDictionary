procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.SphCheckList := new System.Windows.Forms.CheckedListBox();
        self.BackBtn := new System.Windows.Forms.Button();
        self.OKBtn := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // SphCheckList
        // 
        self.SphCheckList.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.SphCheckList.FormattingEnabled := true;
        self.SphCheckList.Location := new System.Drawing.Point(-2, -2);
        self.SphCheckList.Name := 'SphCheckList';
        self.SphCheckList.Size := new System.Drawing.Size(314, 289);
        self.SphCheckList.TabIndex := 0;
        self.SphCheckList.SelectedIndexChanged += SphCheckList_SelectedIndexChanged;
        // 
        // BackBtn
        // 
        self.BackBtn.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.BackBtn.Location := new System.Drawing.Point(226, 293);
        self.BackBtn.Name := 'BackBtn';
        self.BackBtn.Size := new System.Drawing.Size(75, 23);
        self.BackBtn.TabIndex := 1;
        self.BackBtn.Text := 'Назад';
        self.BackBtn.UseVisualStyleBackColor := true;
        self.BackBtn.Click += BackBtn_Click;
        // 
        // OKBtn
        // 
        self.OKBtn.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Left)));
        self.OKBtn.Location := new System.Drawing.Point(12, 293);
        self.OKBtn.Name := 'OKBtn';
        self.OKBtn.Size := new System.Drawing.Size(75, 23);
        self.OKBtn.TabIndex := 2;
        self.OKBtn.Text := 'ОК';
        self.OKBtn.UseVisualStyleBackColor := true;
        self.OKBtn.Click += OKBtn_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(313, 324);
        self.Controls.Add(self.OKBtn);
        self.Controls.Add(self.BackBtn);
        self.Controls.Add(self.SphCheckList);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MinimumSize := new System.Drawing.Size(300, 300);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterParent;
        self.Text := 'Укажите нужные сферы применения';
        self.ResumeLayout(false);
    end;
