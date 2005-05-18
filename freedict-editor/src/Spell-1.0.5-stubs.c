/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#include <string.h>
#define ORBIT2_STUBS_API
#include "Spell-1.0.5.h"

GNOME_Spell_LanguageSeq *
GNOME_Spell_Dictionary_getLanguages(GNOME_Spell_Dictionary _obj,
				    CORBA_Environment * ev)
{
   GNOME_Spell_LanguageSeq *_ORBIT_retval;
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       getLanguages) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_retval =
	 _ORBIT_epv->getLanguages(ORBIT_STUB_GetServant(_obj), ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				0, &_ORBIT_retval, NULL, NULL, ev);

   }
   return _ORBIT_retval;
}

void
GNOME_Spell_Dictionary_setLanguage(GNOME_Spell_Dictionary _obj,
				   const CORBA_char * language,
				   CORBA_Environment * ev)
{
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       setLanguage) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_epv->setLanguage(ORBIT_STUB_GetServant(_obj), language, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[1];

      _args[0] = (gpointer) & language;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				1, NULL, _args, NULL, ev);

   }
}
CORBA_boolean
GNOME_Spell_Dictionary_checkWord(GNOME_Spell_Dictionary _obj,
				 const CORBA_char * word,
				 CORBA_Environment * ev)
{
   CORBA_boolean _ORBIT_retval;
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       checkWord) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_retval =
	 _ORBIT_epv->checkWord(ORBIT_STUB_GetServant(_obj), word, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[1];

      _args[0] = (gpointer) & word;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				2, &_ORBIT_retval, _args, NULL, ev);

   }
   return _ORBIT_retval;
}

GNOME_Spell_StringSeq *
GNOME_Spell_Dictionary_getSuggestions(GNOME_Spell_Dictionary _obj,
				      const CORBA_char * word,
				      CORBA_Environment * ev)
{
   GNOME_Spell_StringSeq *_ORBIT_retval;
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       getSuggestions) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_retval =
	 _ORBIT_epv->getSuggestions(ORBIT_STUB_GetServant(_obj), word, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[1];

      _args[0] = (gpointer) & word;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				3, &_ORBIT_retval, _args, NULL, ev);

   }
   return _ORBIT_retval;
}

void
GNOME_Spell_Dictionary_addWordToSession(GNOME_Spell_Dictionary _obj,
					const CORBA_char * word,
					CORBA_Environment * ev)
{
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       addWordToSession) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_epv->addWordToSession(ORBIT_STUB_GetServant(_obj), word, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[1];

      _args[0] = (gpointer) & word;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				4, NULL, _args, NULL, ev);

   }
}
void
GNOME_Spell_Dictionary_addWordToPersonal(GNOME_Spell_Dictionary _obj,
					 const CORBA_char * word,
					 const CORBA_char * language,
					 CORBA_Environment * ev)
{
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       addWordToPersonal) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_epv->addWordToPersonal(ORBIT_STUB_GetServant(_obj), word,
				    language, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[2];

      _args[0] = (gpointer) & word;
      _args[1] = (gpointer) & language;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				5, NULL, _args, NULL, ev);

   }
}
void
GNOME_Spell_Dictionary_setCorrection(GNOME_Spell_Dictionary _obj,
				     const CORBA_char * word,
				     const CORBA_char * replacement,
				     const CORBA_char * language,
				     CORBA_Environment * ev)
{
   POA_GNOME_Spell_Dictionary__epv *_ORBIT_epv;

   if (ORBit_small_flags & ORBIT_SMALL_FAST_LOCALS &&
       ORBIT_STUB_IsBypass(_obj, GNOME_Spell_Dictionary__classid) &&
       (_ORBIT_epv =
	(POA_GNOME_Spell_Dictionary__epv *) ORBIT_STUB_GetEpv(_obj,
							      GNOME_Spell_Dictionary__classid))->
       setCorrection) {
      ORBIT_STUB_PreCall(_obj);
      _ORBIT_epv->setCorrection(ORBIT_STUB_GetServant(_obj), word,
				replacement, language, ev);
      ORBIT_STUB_PostCall(_obj);
   } else {			/* remote marshal */
      gpointer _args[3];

      _args[0] = (gpointer) & word;
      _args[1] = (gpointer) & replacement;
      _args[2] = (gpointer) & language;
      ORBit_small_invoke_stub_n(_obj,
				&GNOME_Spell_Dictionary__iinterface.methods,
				6, NULL, _args, NULL, ev);

   }
}