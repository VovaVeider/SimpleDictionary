procedure InitializeComponent;
    begin
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.FileMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.LoadMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.CreateMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.SaveMenuIiem := new System.Windows.Forms.ToolStripMenuItem();
        self.SaveAsMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.Edit := new System.Windows.Forms.ToolStripMenuItem();
        self.AddWord := new System.Windows.Forms.ToolStripMenuItem();
        self.Spheres := new System.Windows.Forms.ToolStripMenuItem();
        self.Info := new System.Windows.Forms.ToolStripMenuItem();
        self.Help := new System.Windows.Forms.ToolStripMenuItem();
        self.AboutProgram := new System.Windows.Forms.ToolStripMenuItem();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.ImageScalingSize := new System.Drawing.Size(18, 18);
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[3](self.FileMenuItem, self.Edit, self.Info));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(586, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // FileMenuItem
        // 
        self.FileMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.LoadMenuItem, self.CreateMenuItem, self.SaveMenuIiem, self.SaveAsMenuItem));
        self.FileMenuItem.Name := 'FileMenuItem';
        self.FileMenuItem.Size := new System.Drawing.Size(48, 20);
        self.FileMenuItem.Text := 'Файл';
        // 
        // LoadMenuItem
        // 
        self.LoadMenuItem.Name := 'LoadMenuItem';
        self.LoadMenuItem.Size := new System.Drawing.Size(154, 22);
        self.LoadMenuItem.Text := 'Загрузить';
        self.LoadMenuItem.Click += LoadMenuItem_Click;
        // 
        // CreateMenuItem
        // 
        self.CreateMenuItem.Name := 'CreateMenuItem';
        self.CreateMenuItem.Size := new System.Drawing.Size(154, 22);
        self.CreateMenuItem.Text := 'Создать';
        self.CreateMenuItem.Click += CreateMenuItem_Click;
        // 
        // SaveMenuIiem
        // 
        self.SaveMenuIiem.Name := 'SaveMenuIiem';
        self.SaveMenuIiem.Size := new System.Drawing.Size(154, 22);
        self.SaveMenuIiem.Text := 'Сохранить';
        // 
        // SaveAsMenuItem
        // 
        self.SaveAsMenuItem.Name := 'SaveAsMenuItem';
        self.SaveAsMenuItem.Size := new System.Drawing.Size(154, 22);
        self.SaveAsMenuItem.Text := 'Сохранить как';
        // 
        // Edit
        // 
        self.Edit.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.AddWord, self.Spheres));
        self.Edit.Name := 'Edit';
        self.Edit.Size := new System.Drawing.Size(73, 20);
        self.Edit.Text := 'Изменить';
        // 
        // AddWord
        // 
        self.AddWord.Name := 'AddWord';
        self.AddWord.Size := new System.Drawing.Size(193, 22);
        self.AddWord.Text := 'Добавить слово';
        // 
        // Spheres
        // 
        self.Spheres.Name := 'Spheres';
        self.Spheres.Size := new System.Drawing.Size(193, 22);
        self.Spheres.Text := 'Области применения';
        // 
        // Info
        // 
        self.Info.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.Help, self.AboutProgram));
        self.Info.Name := 'Info';
        self.Info.Size := new System.Drawing.Size(51, 20);
        self.Info.Text := 'Инфо';
        // 
        // Help
        // 
        self.Help.Name := 'Help';
        self.Help.Size := new System.Drawing.Size(152, 22);
        self.Help.Text := 'Справка';
        self.Help.Click += Help_Click;
        // 
        // AboutProgram
        // 
        self.AboutProgram.Name := 'AboutProgram';
        self.AboutProgram.Size := new System.Drawing.Size(152, 22);
        self.AboutProgram.Text := 'О программе';
        self.AboutProgram.Click += AboutProgram_Click;
        // 
        // tabControl1
        // 
        self.tabControl1.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.tabControl1.Location := new System.Drawing.Point(0, 28);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(586, 544);
        self.tabControl1.TabIndex := 1;
        // 
        // Form1
        // 
        self.AutoScaleMode := System.Windows.Forms.AutoScaleMode.Inherit;
        self.ClientSize := new System.Drawing.Size(586, 571);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.menuStrip1);
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(500, 500);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
