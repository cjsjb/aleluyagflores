\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Staff.midiInstrument = "Violin"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 3/4
		\clef "treble"

                \key e \major
                r4 e'' fis''  |
                gis'' 4. fis'' 8 e'' 4  |
                a'' 4. gis'' 8 fis'' 4  |
                b'' 4. a'' 8 gis'' 4  |
%% 5
                a'' 4. gis'' 8 fis'' 4  |
                e'' 2.  |
                b' 4 e'' 4. dis'' 8  |
                e'' 2.  |
                R2.*15  |
                \key fis \major
                R2.*14  |
                \key a \major
                R2.*20  |
                \key fis \major
                R2.*20  |
                r4 fis'' gis''  |
                ais'' 4. gis'' 8 fis'' 4  |
%% 80
                b'' 4. ais'' 8 gis'' 4  |
                cis''' 4. b'' 8 ais'' 4  |
                b'' 4. ais'' 8 gis'' 4  |
                fis'' 2.  |
                cis'' 4 fis'' eis''  |
%% 85
                fis'' 2.  |
                R2.  |
                \bar "|."
	}
>>
