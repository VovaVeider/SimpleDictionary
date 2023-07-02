//Обтект реализующий словарь
program techdict;
const
  grdiv = chr(21);
  wrddiv = chr(22);
  perenos = chr(5);
  beginentry = 1;
  justentry = 3;
function dellServiseSymb(oldstr:string):string;
begin
  oldstr.Replace(grdiv,'');
  oldstr.Replace(wrddiv,'');
  oldstr.Replace(perenos,'');
  oldstr.Replace(chr(10)+chr(13),perenos);
  oldstr.Replace(chr(10),'');
  oldstr.Replace(chr(13),'');
  result:=oldstr;
end;
function dellFirstEntry(old: string; t: array of string): array of string;
begin
  for var i := 0 to t.Length - 1 do
  begin
    if t[i] = old then begin
      var tmp := new string[t.Length - 1];
      for  var k := 0 to i - 1 do
        tmp[k] := t[k];
      for  var k := i + 1 to t.Length - 1 do
        tmp[k - 1] := t[k];
      result := tmp;
      exit;
      
    end;
    
  end;
  result := t;
end;

function issubset(subarr, ar: array of string): boolean;
begin
  var fl1, fl2: boolean;
  for var i := 0 to subarr.length - 1 do
  begin
    fl2 := False;
    for var j := 0 to ar.length - 1 do
    begin
      
      if ar[j] = subarr[i] then begin
        fl2 := true;
        break;
      end;
    
      end;
    if not fl2 then begin
      result := False;
      exit;
    end;
  end;
  result := True;
end;

type
  article = class
    define, use,synonims: string;
    spheres: array of string;
    function GetCopy(): article;
    begin
      var art := new article;
      art.spheres := copy(self.spheres);
      art.define := self.define;
      art.synonims := self.synonims;
      art.use := self.use;
      result := art;
    end;
  
  end;
  
  TechDict = class
  private
    spheres: array of string;
    d: Dictionary<String, article>;
    description, name: string;
    
    
    constructor ();
    begin
      d := new Dictionary<String, article>;
      setlength(spheres, 0);
    end;
    
    procedure dellword(wrd: string);
    begin
      if d.ContainsKey(wrd) then
        d.Remove(wrd);
    end;
        
    function findwords(subword: string; entrytype: integer; userspheres: array of string; nosph: boolean := False;ignorreg: boolean := False): List<string>;
    begin
      result := new List<string>;
      foreach wrd: string in d.Keys do
      begin
        case entrytype of 
          beginentry:
            begin
              if pos(subword, wrd) = 1  then begin
                if not nosph then begin
                  if userspheres.Length = 0  then 
                    result.Add(wrd)
                  else
                  if issubset(userspheres, d[wrd].spheres) then
                    result.Add(wrd)
                end
                else
                if d[wrd].spheres.Length = 0 then
                  result.Add(wrd);
              end;
            end;
          justentry:
            begin
              if pos(subword, wrd) <> 0  then begin
                 if not nosph then begin
                  if userspheres.Length = 0  then 
                    result.Add(wrd)
                  else
                  if issubset(userspheres, d[wrd].spheres) then
                    result.Add(wrd)
                end
                else
                if d[wrd].spheres.Length = 0 then
                  result.Add(wrd);
              end; 
            end;
        end;
      end;
    end;
    
    
    function indict(wrd: string): boolean;
    begin
      result := d.ContainsKey(wrd);
    end;
    
    function find(wrd: string): article;
    begin
      result := d[wrd].GetCopy;  
      result.use.Replace(perenos, char(10)+char(13));
      result.define.Replace(perenos, char(10)+char(13));
    end;
    
    procedure AddWord(wrd: string; art: article);
    begin
        wrd:=dellservisesymb(wrd);
      
        d[wrd] := art.GetCopy;
        
        d[wrd].define:=dellservisesymb(d[wrd].define);
        d[wrd].use:=dellservisesymb(d[wrd].use);
        d[wrd].synonims:=dellservisesymb(d[wrd].synonims);
        
        for var i := 0 to d[wrd].spheres.Length - 1 do
          d[wrd].spheres[i]:=dellservisesymb(d[wrd].spheres[i]);

        //Проверка на наличие дубликатов сфер не нужна - проверка на уровне винформс
    end;
    
    function editsph(oldsph, newsph: string): boolean;
    begin
      newsph.Replace(grdiv, '');
      newsph.Replace(wrddiv, '');
      newsph.Replace(perenos, '');
      if (not (newsph in spheres)) and (oldsph in spheres) then begin
        for var i := 0 to spheres.Length - 1 do
        begin
          if spheres[i] = oldsph then begin
            spheres[i] := newsph;
            break;
          end;     
        end;
        foreach wrd: string in d.Keys do
        begin
          for var i := 0 to (d[wrd].spheres.Length - 1) do
          begin
            if d[wrd].spheres[i] = oldsph then begin
              d[wrd].spheres[i] := newsph;
              break;
            end;     
          end;
        end;
        result := True;
      end
      
      else
        result := False;
    end;
    
    function getspheres(): array of string;
    begin
      result := copy(spheres);
    end;
    
    function addsphere(sphere: string): boolean;
    begin
      sphere.Replace(grdiv, '');
      sphere.Replace(wrddiv, '');  
      sphere.Replace(perenos, '');
      if not (sphere in spheres)  then begin
        setlength(spheres, spheres.Length + 1);
        spheres[spheres.Length - 1] := sphere;
        result := true;
      end
      else
        result := false;
    end;
    
    procedure dellsphere(sphere: string);
    begin
      if sphere in spheres  then begin
        spheres := dellfirstentry(sphere, spheres);
        foreach wrd: string in d.Keys do
        begin
          if sphere in d[wrd].spheres then begin
            d[wrd].spheres := dellfirstentry(sphere, d[wrd].spheres);
          end;
        end;
      end
      
    end;
    
    procedure load(path: string);
    begin
      spheres := new string[0];
      var f: text;
      assign(f, path);
      f.reset();
      var str: string;
      readln(f, str);
      var strmas := str.Split(grdiv);
      Name := strmas[0];
      Description := strmas[1];
      if strmas[2] <> '' then
        spheres := strmas[2].split(wrddiv);
      var tmp: article;
      d := new Dictionary<String, article>;
      while not eof(f) do
      begin
        str := f.ReadString();
        strmas := str.Split(grdiv);
        tmp := new article;
        tmp.define := strmas[1];
        tmp.use := strmas[2];
        tmp.spheres := strmas[3].Split(wrddiv);
        tmp.synonims := strmas[4];
        d[strmas[0]] := tmp;
      end;
      
      
    end;
    
    procedure save(path: string);
    begin
      var f: text;
      var str, sph, synonims: string;
      assign(f, path);
      f.rewrite();
      
      for var i := 0 to length(spheres) - 1  do
      begin
        sph += spheres[i];
        if i <> length(spheres) - 1 then
          sph += wrddiv;
      end;
      str := Name + grdiv + description + grdiv + sph;
      f.Write(str);
      
      foreach var wrd: string in d.Keys do
      begin
        f.Writeln();
        str := ''; sph := '';
        str += wrd + grdiv + d[wrd].define + grdiv + d[wrd].use + grdiv;
        for var i := 0 to length(d[wrd].spheres) - 1  do
        begin
          sph += d[wrd].spheres[i];
          if i <> length(d[wrd].spheres) - 1 then
            sph += wrddiv;
        end;
        str += sph + grdiv;
        str += d[wrd].synonims;
        f.Write(str);
      end;
      f.Close()
    end;
  
  
  end;

begin
  {var tst := new TechDict();
  var g:= new article ;
  tst.addsphere('Кулинария');
  tst.addsphere('Медицина');
  tst.addsphere('IT');
  //WRITELN(TST.getspheres);
  TST.description:='Это тестовый словарь с элементаси отсебятины';
  tst.name:='Test slovarik';
  var wrd,tmp:string;
  for var i:=1 to 2 do begin
    write('Слово: '); readln(wrd);
    write('Определение :'); readln(g.define);
    write('Пример использвания: '); readln(g.use);
    write('Введите сферы :'); readln(tmp); g.spheres:=tmp.Split(' ');
    write('Введите синонимы :'); readln(g.synonims); 
    tst.AddWord(wrd,g);
    writeln('================================================');
  end;
  tst.save('tst.save');
  tst.load('tst.save');
  tst.editsph('Медицина','Шарлатанство');
  //writeln(tst.findwords('До',beginentry,arr('Медицина'),False));
  //writeln(tst.find('Доктор').spheres);
  writeln(tst.find('Абобус').define);}
end.