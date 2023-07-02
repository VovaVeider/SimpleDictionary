procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.tableLayoutPanel1 := new System.Windows.Forms.TableLayoutPanel();
        self.label5 := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.WrdTextBox := new System.Windows.Forms.TextBox();
        self.SphList := new System.Windows.Forms.CheckedListBox();
        self.label3 := new System.Windows.Forms.Label();
        self.DefineBox := new System.Windows.Forms.TextBox();
        self.UseBox := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.SynTextBox := new System.Windows.Forms.TextBox();
        self.BackBut := new System.Windows.Forms.Button();
        self.AddEditBut := new System.Windows.Forms.Button();
        self.button1 := new System.Windows.Forms.Button();
        self.tableLayoutPanel1.SuspendLayout();
        self.SuspendLayout();
        // 
        // tableLayoutPanel1
        // 
        self.tableLayoutPanel1.Anchor := (System.Windows.Forms.AnchorStyles(((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.tableLayoutPanel1.ColumnCount := 1;
        self.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 100));
        self.tableLayoutPanel1.Controls.Add(self.label5, 0, 8);
        self.tableLayoutPanel1.Controls.Add(self.label1, 0, 0);
        self.tableLayoutPanel1.Controls.Add(self.WrdTextBox, 0, 1);
        self.tableLayoutPanel1.Controls.Add(self.SphList, 0, 3);
        self.tableLayoutPanel1.Controls.Add(self.label3, 0, 4);
        self.tableLayoutPanel1.Controls.Add(self.DefineBox, 0, 5);
        self.tableLayoutPanel1.Controls.Add(self.UseBox, 0, 7);
        self.tableLayoutPanel1.Controls.Add(self.label4, 0, 6);
        self.tableLayoutPanel1.Controls.Add(self.label2, 0, 2);
        self.tableLayoutPanel1.Controls.Add(self.SynTextBox, 0, 9);
        self.tableLayoutPanel1.Location := new System.Drawing.Point(3, 1);
        self.tableLayoutPanel1.Name := 'tableLayoutPanel1';
        self.tableLayoutPanel1.RowCount := 10;
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 45.16129));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 54.83871));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 24));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 95));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 23));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 214));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 23));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 124));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 19));
        self.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 24));
        self.tableLayoutPanel1.Size := new System.Drawing.Size(512, 607);
        self.tableLayoutPanel1.TabIndex := 0;
        // 
        // label5
        // 
        self.label5.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.label5.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label5.Location := new System.Drawing.Point(3, 563);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(506, 19);
        self.label5.TabIndex := 8;
        self.label5.Text := 'Синонимы';
        // 
        // label1
        // 
        self.label1.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.label1.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.Location := new System.Drawing.Point(3, 0);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(506, 27);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Слово';
        // 
        // WrdTextBox
        // 
        self.WrdTextBox.Anchor := (System.Windows.Forms.AnchorStyles(((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.WrdTextBox.Location := new System.Drawing.Point(3, 30);
        self.WrdTextBox.Name := 'WrdTextBox';
        self.WrdTextBox.Size := new System.Drawing.Size(506, 20);
        self.WrdTextBox.TabIndex := 1;
        // 
        // SphList
        // 
        self.SphList.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.SphList.Font := new System.Drawing.Font('Microsoft Sans Serif', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.SphList.FormattingEnabled := true;
        self.SphList.HorizontalScrollbar := true;
        self.SphList.Location := new System.Drawing.Point(3, 87);
        self.SphList.Name := 'SphList';
        self.SphList.ScrollAlwaysVisible := true;
        self.SphList.Size := new System.Drawing.Size(506, 89);
        self.SphList.Sorted := true;
        self.SphList.TabIndex := 3;
        // 
        // label3
        // 
        self.label3.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.label3.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label3.Location := new System.Drawing.Point(3, 179);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(506, 23);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Толкование';
        // 
        // DefineBox
        // 
        self.DefineBox.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.DefineBox.Location := new System.Drawing.Point(3, 205);
        self.DefineBox.Multiline := true;
        self.DefineBox.Name := 'DefineBox';
        self.DefineBox.ScrollBars := System.Windows.Forms.ScrollBars.Both;
        self.DefineBox.Size := new System.Drawing.Size(506, 208);
        self.DefineBox.TabIndex := 5;
        // 
        // UseBox
        // 
        self.UseBox.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.UseBox.Location := new System.Drawing.Point(3, 442);
        self.UseBox.Multiline := true;
        self.UseBox.Name := 'UseBox';
        self.UseBox.ScrollBars := System.Windows.Forms.ScrollBars.Both;
        self.UseBox.Size := new System.Drawing.Size(506, 118);
        self.UseBox.TabIndex := 7;
        // 
        // label4
        // 
        self.label4.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.label4.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label4.Location := new System.Drawing.Point(3, 416);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(506, 23);
        self.label4.TabIndex := 6;
        self.label4.Text := 'Примеры употребления';
        // 
        // label2
        // 
        self.label2.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.label2.Font := new System.Drawing.Font('Microsoft Sans Serif', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label2.Location := new System.Drawing.Point(3, 60);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(506, 24);
        self.label2.TabIndex := 2;
        self.label2.Text := 'Где применяется';
        // 
        // SynTextBox
        // 
        self.SynTextBox.Anchor := (System.Windows.Forms.AnchorStyles((((System.Windows.Forms.AnchorStyles.Top or System.Windows.Forms.AnchorStyles.Bottom) 
                    or System.Windows.Forms.AnchorStyles.Left) 
                    or System.Windows.Forms.AnchorStyles.Right)));
        self.SynTextBox.Location := new System.Drawing.Point(3, 585);
        self.SynTextBox.Name := 'SynTextBox';
        self.SynTextBox.Size := new System.Drawing.Size(506, 20);
        self.SynTextBox.TabIndex := 9;
        // 
        // BackBut
        // 
        self.BackBut.Anchor := System.Windows.Forms.AnchorStyles.Right;
        self.BackBut.Location := new System.Drawing.Point(413, 623);
        self.BackBut.Name := 'BackBut';
        self.BackBut.Size := new System.Drawing.Size(90, 23);
        self.BackBut.TabIndex := 1;
        self.BackBut.Text := 'Назад';
        self.BackBut.UseVisualStyleBackColor := true;
        self.BackBut.Click += BackBut_Click;
        // 
        // AddEditBut
        // 
        self.AddEditBut.Anchor := System.Windows.Forms.AnchorStyles.Left;
        self.AddEditBut.Location := new System.Drawing.Point(6, 623);
        self.AddEditBut.Name := 'AddEditBut';
        self.AddEditBut.Size := new System.Drawing.Size(90, 23);
        self.AddEditBut.TabIndex := 2;
        self.AddEditBut.Text := 'Добавить';
        self.AddEditBut.UseVisualStyleBackColor := true;
        self.AddEditBut.Click += AddEditBut_Click;
        // 
        // button1
        // 
        self.button1.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.button1.Location := new System.Drawing.Point(296, 623);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(111, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Очистить форму';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.SystemColors.InactiveCaption;
        self.ClientSize := new System.Drawing.Size(515, 658);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.AddEditBut);
        self.Controls.Add(self.BackBut);
        self.Controls.Add(self.tableLayoutPanel1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximumSize := new System.Drawing.Size(1000000, 697);
        self.MinimumSize := new System.Drawing.Size(525, 697);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterParent;
        self.Text := 'Работа с карточкой слова';
        self.tableLayoutPanel1.ResumeLayout(false);
        self.tableLayoutPanel1.PerformLayout();
        self.ResumeLayout(false);
    end;
