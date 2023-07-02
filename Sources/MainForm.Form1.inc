procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.FileMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.LoadMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.CreateMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.SaveMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.SaveAsMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.Edit := new System.Windows.Forms.ToolStripMenuItem();
        self.AddWord := new System.Windows.Forms.ToolStripMenuItem();
        self.Spheres := new System.Windows.Forms.ToolStripMenuItem();
        self.RenameDict := new System.Windows.Forms.ToolStripMenuItem();
        self.Info := new System.Windows.Forms.ToolStripMenuItem();
        self.HelpBtn := new System.Windows.Forms.ToolStripMenuItem();
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
        self.menuStrip1.Size := new System.Drawing.Size(704, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // FileMenuItem
        // 
        self.FileMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[4](self.LoadMenuItem, self.CreateMenuItem, self.SaveMenuItem, self.SaveAsMenuItem));
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
        // SaveMenuItem
        // 
        self.SaveMenuItem.Name := 'SaveMenuItem';
        self.SaveMenuItem.Size := new System.Drawing.Size(154, 22);
        self.SaveMenuItem.Text := 'Сохранить';
        self.SaveMenuItem.Click += SaveMenuItem_Click;
        // 
        // SaveAsMenuItem
        // 
        self.SaveAsMenuItem.Name := 'SaveAsMenuItem';
        self.SaveAsMenuItem.Size := new System.Drawing.Size(154, 22);
        self.SaveAsMenuItem.Text := 'Сохранить как';
        self.SaveAsMenuItem.Click += SaveAsMenuItem_Click;
        // 
        // Edit
        // 
        self.Edit.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[3](self.AddWord, self.Spheres, self.RenameDict));
        self.Edit.Name := 'Edit';
        self.Edit.Size := new System.Drawing.Size(73, 20);
        self.Edit.Text := 'Изменить';
        // 
        // AddWord
        // 
        self.AddWord.Name := 'AddWord';
        self.AddWord.Size := new System.Drawing.Size(209, 22);
        self.AddWord.Text := 'Добавить слово';
        self.AddWord.Click += AddWord_Click;
        // 
        // Spheres
        // 
        self.Spheres.Name := 'Spheres';
        self.Spheres.Size := new System.Drawing.Size(209, 22);
        self.Spheres.Text := 'Области применения';
        self.Spheres.Click += Spheres_Click;
        // 
        // RenameDict
        // 
        self.RenameDict.Name := 'RenameDict';
        self.RenameDict.Size := new System.Drawing.Size(209, 22);
        self.RenameDict.Text := 'Переименовать словарь';
        self.RenameDict.Click += RenameDict_Click;
        // 
        // Info
        // 
        self.Info.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.HelpBtn, self.AboutProgram));
        self.Info.Name := 'Info';
        self.Info.Size := new System.Drawing.Size(51, 20);
        self.Info.Text := 'Инфо';
        // 
        // HelpBtn
        // 
        self.HelpBtn.Name := 'HelpBtn';
        self.HelpBtn.Size := new System.Drawing.Size(149, 22);
        self.HelpBtn.Text := 'Справка';
        self.HelpBtn.Click += HelpBtn_Click;
        // 
        // AboutProgram
        // 
        self.AboutProgram.Name := 'AboutProgram';
        self.AboutProgram.Size := new System.Drawing.Size(149, 22);
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
        self.tabControl1.ShowToolTips := true;
        self.tabControl1.Size := new System.Drawing.Size(704, 544);
        self.tabControl1.TabIndex := 1;
        self.tabControl1.MouseDoubleClick += tabControl1_MouseDoubleClick;
        // 
        // Form1
        // 
        self.AutoScaleMode := System.Windows.Forms.AutoScaleMode.Inherit;
        self.ClientSize := new System.Drawing.Size(704, 571);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.menuStrip1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(720, 560);
        self.Name := 'Form1';
        self.Text := 'Словарь';
        self.FormClosing += Form1_FormClosing;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
