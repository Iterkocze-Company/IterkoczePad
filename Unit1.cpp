//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString NazwaPliku="";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WczytajPlik1Click(TObject *Sender)
{
  if(OpenDial->Execute())
  {
        try
        {
                Tresc->Lines->LoadFromFile(OpenDial->FileName);
                NazwaPliku = OpenDial->FileName;
                Caption = OpenDial->FileName;
        }
        catch(...)
        {
                ShowMessage("B³¹d otwarcia pliku.");
        }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZapiszJako1Click(TObject *Sender)
{
  if(SaveDial->Execute())
  {
        try
        {
                Tresc->Lines->SaveToFile(SaveDial->FileName);
                NazwaPliku = SaveDial->FileName;
                Caption = OpenDial->FileName;
        }
        catch(...)
        {
                ShowMessage("B³¹d Zapisania Pliku.");
        }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
        if (NazwaPliku!="")
        {
                Tresc->Lines->SaveToFile(NazwaPliku);

        }
        else
        {
                Form1->ZapiszJako1Click(MainMenu1);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
        if(Application->MessageBox("UWaaaaaGa, czy na 100% chcesz utworzyc nowy plik?","PotwierdŸ",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
        {
                Tresc->Lines->Clear();
                NazwaPliku = "";
                Caption = "IterkoczePad"; 
        }       
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Shift.Contains(ssCtrl))
        {
                if(Key == 's' || Key == 'S') Form1->Zapisz1Click(MainMenu1);
                if(Key == 'a' || Key == 'A') Tresc->SelectAll();
        }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
        if(Application->MessageBox("UWaaaaaGa, czy na 100% chcesz zakoñczyc Dzia³anie Programu?","PotwierdŸ",MB_YESNO | MB_ICONQUESTION) == IDYES)
                Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        if(Application->MessageBox("UWaaaaaGa, czy na 100% chcesz zakoñczyc Dzia³anie Programu?","You Close?! You Close??",MB_YESNO | MB_ICONQUESTION) == IDNO)
                Action=caNone;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Wytnij1Click(TObject *Sender)
{
        Tresc->CutToClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::KopiujCtrlC1Click(TObject *Sender)
{
        Tresc->CopyToClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WklejCtrlV1Click(TObject *Sender)
{
        Tresc->PasteFromClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ZawijanieWierszy1Click(TObject *Sender)
{
        if (ZawijanieWierszy1->Checked == true)
        {
                ZawijanieWierszy1->Checked=false;
                Tresc->WordWrap=false;
                Tresc->ScrollBars = ssBoth;
        }
        else
        {
                ZawijanieWierszy1->Checked=true;
                Tresc->WordWrap=true;
                Tresc->ScrollBars = ssVertical;     
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
        if(FontDial->Execute())
        {
                //Krój
                Tresc->Font->Name = FontDial->Font->Name;

                //Kolor
                Tresc->Font->Color = FontDial->Font->Color;

                //Rozmiar
                Tresc->Font->Size = FontDial->Font->Size;

                //Styl
                Tresc->Font->Style = FontDial->Font->Style;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::oProgramie1Click(TObject *Sender)
{
        Form2->ShowModal();   
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Strona1Click(TObject *Sender)
{
        ShellExecute(NULL,"open","www.nfpm.xlx.pl",NULL,NULL,SW_SHOWNORMAL);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Drukuj1Click(TObject *Sender)
{
        if (PrintDial->Execute())
        {
                //TODO: Zrobic dzia³aj¹ce drukowanie.
        }
}
//---------------------------------------------------------------------------

