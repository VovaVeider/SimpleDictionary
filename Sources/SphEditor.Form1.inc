procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.SphList := new System.Windows.Forms.ListBox();
        self.BackBtn := new System.Windows.Forms.Button();
        self.tableLayoutPanel1 := new System.Windows.Forms.TableLayoutPanel();
        self.AddBtn := new System.Windows.Forms.Button();
        self.RenameBtn := new System.Windows.Forms.Button();
        self.delbtn := new System.Windows.Forms.Button();
        self.tableLayoutPanel1.SuspendLayout();
        self.SuspendLayout();
        // 
        // SphList
        // 
        self.SphList.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.SphList.BackColor := System.Drawing.Color.White;
        self.SphList.FormattingEnabled := true;
        self.SphList.Location := new System.Drawing.Point(1, 1);
        self.SphList.Name := 'SphList';
        self.SphList.Size := new System.Drawing.Size(418, 394);
        self.SphList.TabIndex := 0;
        // 
        // BackBtn
        // 
        self.BackBtn.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.BackBtn.Location := new System.Drawing.Point(333, 406);
        self.BackBtn.Name := 'BackBtn';
        self.BackBtn.Size := new System.Drawing.Size(75, 23);
        self.BackBtn.TabIndex := 1;
        self.BackBtn.Text := 'Назад';
        self.BackBtn.UseVisualStyleBackColor := true;
        self.BackBtn.Click += BackBtn_Click;
        // 
        // tableLayoutPanel1
        // 
        self.tableLayoutPanel1.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Left)));
        self.tableLayoutPanel1.ColumnCount := 3;
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 42.02128));
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 57.97872));
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Absolute, 70));
        self.tableLayoutPanel1.Controls.Add(self.AddBtn, 0, 0);
        self.tableLayoutPanel1.Controls.Add(self.RenameBtn, 1, 0);
        self.tableLayoutPanel1.Controls.Add(self.delbtn, 2, 0);
        self.tableLayoutPanel1.Location := new System.Drawing.Point(1, 401);
        self.tableLayoutPanel1.Name := 'tableLayoutPanel1';
        self.tableLayoutPanel1.RowCount := 1;
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50));
        self.tableLayoutPanel1.Size := new System.Drawing.Size(259, 28);
        self.tableLayoutPanel1.TabIndex := 2;
        // 
        // AddBtn
        // 
        self.AddBtn.Location := new System.Drawing.Point(3, 3);
        self.AddBtn.Name := 'AddBtn';
        self.AddBtn.Size := new System.Drawing.Size(73, 22);
        self.AddBtn.TabIndex := 0;
        self.AddBtn.Text := 'Добавить';
        self.AddBtn.UseVisualStyleBackColor := true;
        self.AddBtn.Click += AddBtn_Click;
        // 
        // RenameBtn
        // 
        self.RenameBtn.Location := new System.Drawing.Point(82, 3);
        self.RenameBtn.Name := 'RenameBtn';
        self.RenameBtn.Size := new System.Drawing.Size(103, 22);
        self.RenameBtn.TabIndex := 1;
        self.RenameBtn.Text := 'Переименовать';
        self.RenameBtn.UseVisualStyleBackColor := true;
        self.RenameBtn.Click += RenameBtn_Click;
        // 
        // delbtn
        // 
        self.delbtn.Location := new System.Drawing.Point(191, 3);
        self.delbtn.Name := 'delbtn';
        self.delbtn.Size := new System.Drawing.Size(65, 22);
        self.delbtn.TabIndex := 2;
        self.delbtn.Text := 'Удалить';
        self.delbtn.UseVisualStyleBackColor := true;
        self.delbtn.Click += delbtn_Click;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.GradientActiveCaption;
        self.ClientSize := new System.Drawing.Size(420, 441);
        self.Controls.Add(self.tableLayoutPanel1);
        self.Controls.Add(self.BackBtn);
        self.Controls.Add(self.SphList);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MinimumSize := new System.Drawing.Size(400, 400);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterParent;
        self.Text := 'Редактор сфер использования';
        self.tableLayoutPanel1.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
