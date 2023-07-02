//Основная панель в главном меню - поведение + описание вида
unit MainWindowPanels;

interface
uses techdictmodule,GetSphListModule;
uses System, System.Drawing, System.Windows.Forms,EditAddWordForm,SphEditor,GetText;
type
  ShowArt=class;
  FindPanel= class(Panel)
     private
       FindTextBox:TextBox;
       noreg :CheckBox;
       FndBtn :button;
       Findres:ListBox;
       d:techdict;
       out:ShowArt;
       selectedsph:List<string>;
       sphtype,enttype:ComboBox;
       
       entrytype: integer;
       nosph: boolean;
       ignorreg: boolean;
       
       
     procedure findbtnhandler(sender: Object; e: EventArgs);
     procedure listclick(sender: Object; e: MouseEventArgs);
     constructor(d:techdict;out:ShowArt);
      begin
      selectedsph:= new List<string>;
      d.sphremoved+=self.sphremoved;
      d.sphrenamed+=self.sphrenamed;
      var myfont := new System.Drawing.Font('Times New Roman', 12.0); 
      self.out:=out;
      self.d:=d;
      self.BorderStyle:=System.Windows.Forms.BorderStyle.Fixed3D; 
      self.Size:=new System.Drawing.Size(704, 544);
      self.Dock:=DockStyle.Fill;
      
      FindTextBox:=new TextBox();
      FindTextBox.location:= new Point(10,10);
      FindTextBox.Anchor:=AnchorStyles.Top or anchorstyles.Right or anchorstyles.left;
      FindTextBox.Width:=Self.Width-520;
      FindTextBox.Font:=myfont;
      
      noreg := new CheckBox();
      noreg.Location:=new point(220,8);
      noreg.Anchor:=AnchorStyles.Top or anchorstyles.Right ;
      
      var labelreg:=new &Label();
      labelreg.Text:='Игнор. регистр';
      labelreg.Location:=new point(206,27);
      labelreg.Anchor:=AnchorStyles.Top or anchorstyles.Right ;
      self.Controls.Add(labelreg);
      
      enttype:= new ComboBox();
      enttype.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
      enttype.DataSource:=arr('Начинается на','Просто содержится');
      enttype.Location:=new Point (310,25);
      enttype.Anchor:=AnchorStyles.Right or AnchorStyles.Top;
      self.Controls.Add(enttype);
      
      var labelenttype:=new &Label();
      labelenttype.Text:='Тип вхождения слова';
      labelenttype.AutoSize:=true;
      labelenttype.Location:=new point(310,5);
      labelenttype.Anchor:=AnchorStyles.Top or anchorstyles.Right ;
      self.Controls.Add(labelenttype);
      
      sphtype:=new ComboBox();
      sphtype.DataSource:=Arr('Любые','Нет сферы примен.','Свой список');
      sphtype.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
      sphtype.Anchor:=AnchorStyles.Top or anchorstyles.Right ;
      sphtype.Location:= new Point(440,25);
      self.Controls.Add( sphtype);
     
      
      var labelsphtype:=new &Label();
      labelsphtype.Text:='Какие сферы применения';
      labelsphtype.AutoSize:=true;
      labelsphtype.Location:=new point(440,5);
      labelsphtype.Anchor:=AnchorStyles.Top or anchorstyles.Right ;
      self.Controls.Add(labelsphtype);
      
      FndBtn := new button();
      FndBtn.Text:='Поиск';
      FndBtn.Location:=new Point(590,27);
      FndBtn.Click+=findbtnhandler;
      fndbtn.Anchor:= AnchorStyles.Top or anchorstyles.Right;
      
      var SphListBtn := new button();
      SphListBtn.Text:='Выбрать сферы';
      //SphListBtn.AutoSize:=true;
      SphListBtn.Location:=new Point(580,1);
      SphListBtn.Width:=self.Width-590;
      SphListBtn.Click+=sphlistbtnhandler;
      SphListBtn.Anchor:= AnchorStyles.Top or anchorstyles.Right;
      Self.controls.Add( SphListBtn);
      
      
      FindRes:= new ListBox();
      FindRes.Font:=myfont;
      FindRes.Sorted:=True;
      Findres.location:= new Point(0,50);
      FindRes.Width:=Self.Width;
      FindRes.Left:=0;
      FindRes.Top:=50;
      FindRes.Size:= new System.Drawing.Size(self.Width,Self.Height-50);
      FindRes.Anchor:=AnchorStyles.Left or AnchorStyles.Top or AnchorStyles.Left or AnchorStyles.Right or AnchorStyles.Bottom;
      Findres.MouseClick+= listclick;
      Self.controls.AddRange(Arr(FindTextBox as control,noreg as control,fndbtn as Control,FindRes as control) );
  
       end;
     procedure sphremoved(sph:string);
      begin
        if sph in selectedsph then
          selectedsph.Remove(sph);
      end;
      procedure sphrenamed(oldsph,newsph:string);
      begin
        var ind:=selectedsph.IndexOf(oldsph);
        if ind>-1 then
          selectedsph[ind]:=newsph;
  
      end;
    procedure sphlistbtnhandler (sender: Object; e: EventArgs);
      begin
        var wind:=new GetSphListModule.Form1(d.getspheres().ToList,selectedsph);
        if wind.ShowDialog=System.Windows.Forms.DialogResult.OK then begin
          selectedsph:=wind.Res;
        end;
      end;
  end;
  ShowArt= class(Panel)
  private
    d:techdict;
    wrd:string;
    out : TextBox;
    constructor(d:techdict);
      begin
        self.d:=d;
        self.Dock:=DockStyle.Fill;
        
        var myfont := new System.Drawing.Font('Times New Roman', 14.0); 
        out := new TextBox();
        out.Font:=myfont;
        out.ReadOnly:=True;
        out.Multiline:=True;
        out.Location:=new Point(0,30);
        out.Width:=Self.Width;
        out.Height:=Self.Height-20;
        out.Anchor:=AnchorStyles.Left or AnchorStyles.Top or AnchorStyles.Left or AnchorStyles.Right or AnchorStyles.Bottom;
        out.ScrollBars:=System.Windows.Forms.ScrollBars.Both;
        
        var delbut:=new Button();
        delbut.Location:=new point(self.Width-80,3);
        delbut.Anchor:=AnchorStyles.Top or AnchorStyles.Right;
        delbut.Text:='Удалить';
        delbut.Click+=dellbuthandler;
        
        var editbut:=new Button();
        editbut.Location:=new point(self.Width-160,3);
        editbut.Anchor:=AnchorStyles.Top or AnchorStyles.Right;
        editbut.Text:='Изменить';
        editbut.Click+=editbtnhandler;
        var backbut:=new Button();
        backbut.Location:=new point(10,3);
        backbut.Anchor:=AnchorStyles.Top or AnchorStyles.Left;
        backbut.Text:='Назад';
        backbut.Click+=Backbuthandler;
        
        self.Controls.Add(out);
        self.Controls.Add(delbut);
        self.Controls.Add(editbut);
        self.Controls.Add(backbut);
        d.dictchange+=dictchange;
      end;
      procedure backbuthandler(sender: Object; e: EventArgs);
        begin
          self.Hide();
          self.Parent.Controls.Item[1].Show();
          
        end;
 
      procedure dellbuthandler(sender: Object; e: EventArgs);
        begin
          if (MessageBox.Show('Точно хотите удалить слово?', 'Удаление', MessageBoxButtons.OKCancel, MessageBoxIcon.Question) = System.Windows.Forms.DialogResult.OK) then begin
            var fnd:=self.Parent.Controls[1] as FindPanel;
            var dd:=fnd.Findres.DataSource as List<String>;
            d.dellword(wrd);
            dd.Remove(wrd);
            fnd.Findres.DataSource:=dd.ToArray;
            self.Hide();
            self.Parent.Controls.Item[1].Show();
            end;
        end;        
        
      procedure showword(wrd:string);
        begin
          self.wrd:=wrd;
          var art:=d.find(wrd);
          out.Text:='  '+wrd+chr(13)+chr(10);
          if art.spheres.Length<>0 then begin
            var sph:string;
            for var i:=0 to art.spheres.Length-1  do begin
              sph+=art.spheres[i];
              if i<> art.spheres.Length-1 then
                sph+=' ; ';
              end;
            out.Text+='Области применения  : '+chr(13)+chr(10) +'  ' +sph+chr(13)+chr(10)+chr(13)+chr(10);
            end;
          if art.define.Length<> 0 then
            out.Text+='Определение:'+chr(13)+chr(10)+'  ' +art.define+chr(13)+chr(10)+chr(13)+chr(10);
         
          if art.use.Length<> 0 then
            out.Text+='Пример употребления:'+chr(13)+chr(10) +'  '+art.use+chr(13)+chr(10)+chr(13)+chr(10);
          if art.synonims.Length<> 0 then
            out.Text+='Синонимы:'+chr(13)+chr(10) +'  '+art.synonims;
        end;
      procedure dictchange ();
      begin
        if d.indict(wrd) then begin
          showword(wrd);
        end;
      end;
      procedure editbtnhandler(sender: Object; e: EventArgs);
        begin
          var editform:=new EditAddWordfORM.Form1(SELF.d,True,self.wrd);
          editform.ShowDialog();
        end;
  end;

   
    


  CustomTab = class (TabPage)
    public
      d:techdict;
      load:BOOLEAN;
      path:string;
      saved:boolean;
    Constructor(Load:boolean;Path:String:='');
      begin
      
      d:=new TechDict();
      self.load:=load;
      if load then begin
        self.saved:=True;
        d.load(path);
        self.path := path;
        if d.dictname.length>15 then 
          self.Text:= d.dictname[1:15]
        else begin
          self.Text:= d.dictname;
          end;
        self.ToolTipText:=d.dictname;
      end
      else begin
        self.path:='';
        d.dictname:='Безымянный';
        self.Text:= d.dictname;
        self.ToolTipText:=d.dictname;
      end;
      d.dictchange+=dictchange;
      Self.Anchor:=AnchorStyles.Left or AnchorStyles.Top or AnchorStyles.Left or AnchorStyles.Right ;
      var ShowPanel:= new ShowArt(d);
      var FindPanel1 :=new FindPanel(d,showpanel);
      self.Controls.Add(ShowPanel);
      self.Controls.Item[0].Hide();
      self.Controls.Add(FindPanel1);
      end;
     
      procedure SetDictName(name:string);
        begin
          if name.Length>15 then 
            self.Text:= name[1:15]
          else 
            self.Text:= name;
          self.ToolTipText:=name;
          self.d.dictname:=name;
        end;
       procedure dictchange();
        begin
          saved:=false;
        end;
    end;
implementation
procedure FindPanel.findbtnhandler(sender: Object; e: EventArgs);
        begin
          var sph:array of string;
          if (selectedsph.Count<>0) and (sphtype.SelectedIndex=2) then
            sph:=selectedsph.ToArray
          else
            setlength(sph,0);
          case sphtype.SelectedIndex of
            0,2: begin //любые
              if enttype.SelectedIndex=0 then
                FindRes.DataSource:=d.findwords(findtextbox.Text,beginentry,sph,False,noreg.Checked)
              else
                FindRes.DataSource:=d.findwords(findtextbox.Text,justentry,sph,False,noreg.Checked);
            end;
            1:begin //нет сферы
              if enttype.SelectedIndex=0 then
                 FindRes.DataSource:=d.findwords(findtextbox.Text,beginentry,sph,True,noreg.Checked)
              else
                FindRes.DataSource:=d.findwords(findtextbox.Text,justentry,sph,True,noreg.Checked);
              end;
            
          end;
          
          
          
        end;
procedure FindPanel.listclick(sender: Object; e: MouseEventArgs);
        begin
          if findres.IndexFromPoint(e.Location)<>-1 then begin
            self.Hide();
            out.showword(Findres.Items[findres.IndexFromPoint(e.Location)].ToString);
            self.Parent.Controls.Item[0].Show();
          end;
        end;
  
end.