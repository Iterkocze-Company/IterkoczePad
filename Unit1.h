//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Nowy1;
        TMenuItem *WczytajPlik1;
        TMenuItem *Zapisz1;
        TMenuItem *N1;
        TMenuItem *ZapiszJako1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMenuItem *Edytor1;
        TMenuItem *Wytnij1;
        TMenuItem *KopiujCtrlC1;
        TMenuItem *WklejCtrlV1;
        TMenuItem *Format1;
        TMenuItem *ZawijanieWierszy1;
        TMenuItem *Czcionka1;
        TMenuItem *Pomoc1;
        TMenuItem *InformacjeoProgramie1;
        TMenuItem *oProgramie1;
        TMenuItem *Strona1;
        TMemo *Tresc;
        TOpenDialog *OpenDial;
        TSaveDialog *SaveDial;
        TFontDialog *FontDial;
        TPrintDialog *PrintDial;
        TMenuItem *N3;
        TMenuItem *Drukuj1;
        void __fastcall WczytajPlik1Click(TObject *Sender);
        void __fastcall ZapiszJako1Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall TrescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Wytnij1Click(TObject *Sender);
        void __fastcall KopiujCtrlC1Click(TObject *Sender);
        void __fastcall WklejCtrlV1Click(TObject *Sender);
        void __fastcall ZawijanieWierszy1Click(TObject *Sender);
        void __fastcall Czcionka1Click(TObject *Sender);
        void __fastcall oProgramie1Click(TObject *Sender);
        void __fastcall Strona1Click(TObject *Sender);
        void __fastcall Drukuj1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
