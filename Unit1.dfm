object Form1: TForm1
  Left = 282
  Top = 166
  Width = 928
  Height = 480
  Caption = 'IterkoczePad'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Tresc: TMemo
    Left = 0
    Top = 0
    Width = 912
    Height = 421
    Align = alClient
    Color = clWindowFrame
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = TrescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 888
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Stw'#243'rz Nowy'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object WczytajPlik1: TMenuItem
        Caption = '&Wczytaj Plik'
        OnClick = WczytajPlik1Click
      end
      object Zapisz1: TMenuItem
        Caption = '&Zapisz    Ctrl+S'
        OnClick = Zapisz1Click
      end
      object ZapiszJako1: TMenuItem
        Caption = 'Zapisz &Jako'
        OnClick = ZapiszJako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Drukuj1: TMenuItem
        Caption = 'Drukuj (PLACEHOLDER)'
        OnClick = Drukuj1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'c&z'
        OnClick = Zakocz1Click
      end
    end
    object Edytor1: TMenuItem
      Caption = '&Edytor'
      object Wytnij1: TMenuItem
        Caption = 'W&ytnij    Ctrl+X'
        OnClick = Wytnij1Click
      end
      object KopiujCtrlC1: TMenuItem
        Caption = 'Kop&iuj    Ctrl+C'
        OnClick = KopiujCtrlC1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = 'Wkle&j    Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object ZawijanieWierszy1: TMenuItem
        Caption = 'Z&awijanie Wierszy'
        Checked = True
        OnClick = ZawijanieWierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Czcionk&a'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'P&omoc'
      object InformacjeoProgramie1: TMenuItem
        Caption = '&Informacje'
        object oProgramie1: TMenuItem
          Caption = '&O Programie'
          OnClick = oProgramie1Click
        end
        object Strona1: TMenuItem
          Caption = '&Strona Iterkocze Company.'
          OnClick = Strona1Click
        end
      end
    end
  end
  object OpenDial: TOpenDialog
    Filter = 'Plik Tekstowy (TXT)|*.txt|Wszystkie Pliki (*)|*.*'
    Left = 864
  end
  object SaveDial: TSaveDialog
    Filter = 
      'Plik Tekstowy (TXT)|*.txt|Kod C (c)|*.c|Kod C++ (cpp)|*.cpp|Kod ' +
      'Nim (nim)|*.nim|Kod C# (cs)|*.cs|Wszystkie Pliki (*)|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 840
  end
  object FontDial: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 816
  end
  object PrintDial: TPrintDialog
    Left = 792
  end
end
