// ConsoleApplication1.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#using <System.Xml.dll>
#include <iostream>



int _tmain(int argc, _TCHAR* argv[])
{
	System::Xml::XmlReader ^reader = System::Xml::XmlReader::Create("C:\\TabellaOrario.xml");
	while (reader->ReadToFollowing("treno")){
		System::String ^trn = reader->GetAttribute("id");
		while (reader->ReadToFollowing("stazione")){
			System::String ^nomestazione = reader->GetAttribute("id");
			reader->ReadToFollowing("arrivo");
			System::String ^trn2 = reader->ReadString();
			reader->ReadToFollowing("partenza");
			System::String ^trn3 = reader->ReadString();

			reader->ReadToFollowing("binarioprogrammato");
			System::String ^trn4 = reader->ReadString();
			reader->ReadToFollowing("latoaperturaporteprogrammato");
			System::String ^trn5 = reader->ReadString();
			
			System::Console::WriteLine(trn+nomestazione+trn2+trn3+trn4+trn5);
			System::Console::WriteLine();


		}
	}
	return 0;
}

