﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t4293298778;
// System.Xml.XmlTextReader
struct XmlTextReader_t1367920089;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t2528036799;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t2048538274;
// System.Collections.Stack
struct Stack_t1761758306;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1467853467;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "System_Xml_System_Xml_XmlReader4123196108.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t357394476  : public XmlReader_t4123196108
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t4293298778 * ___reader_2;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t1367920089 * ___sourceTextReader_3;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t2528036799 * ___validatingReader_4;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t3593115196 * ___dtd_5;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t3822670287 * ___resolver_6;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_7;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t2048538274* ___attributes_8;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_10;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_11;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t1761758306 * ___elementStack_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t1761758306 * ___automataStack_13;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_15;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t415542374 * ___currentAutomata_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t415542374 * ___previousAutomata_17;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t3948406897 * ___idList_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t3948406897 * ___missingIDReferences_19;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t1467853467 * ___nsmgr_20;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_21;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_22;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_26;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t1761758306 * ___attributeValueEntityStack_27;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t243639308 * ___valueBuilder_28;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t3324145743* ___whitespaceChars_29;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___reader_2)); }
	inline EntityResolvingXmlReader_t4293298778 * get_reader_2() const { return ___reader_2; }
	inline EntityResolvingXmlReader_t4293298778 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(EntityResolvingXmlReader_t4293298778 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}

	inline static int32_t get_offset_of_sourceTextReader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___sourceTextReader_3)); }
	inline XmlTextReader_t1367920089 * get_sourceTextReader_3() const { return ___sourceTextReader_3; }
	inline XmlTextReader_t1367920089 ** get_address_of_sourceTextReader_3() { return &___sourceTextReader_3; }
	inline void set_sourceTextReader_3(XmlTextReader_t1367920089 * value)
	{
		___sourceTextReader_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceTextReader_3, value);
	}

	inline static int32_t get_offset_of_validatingReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___validatingReader_4)); }
	inline XmlValidatingReader_t2528036799 * get_validatingReader_4() const { return ___validatingReader_4; }
	inline XmlValidatingReader_t2528036799 ** get_address_of_validatingReader_4() { return &___validatingReader_4; }
	inline void set_validatingReader_4(XmlValidatingReader_t2528036799 * value)
	{
		___validatingReader_4 = value;
		Il2CppCodeGenWriteBarrier(&___validatingReader_4, value);
	}

	inline static int32_t get_offset_of_dtd_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___dtd_5)); }
	inline DTDObjectModel_t3593115196 * get_dtd_5() const { return ___dtd_5; }
	inline DTDObjectModel_t3593115196 ** get_address_of_dtd_5() { return &___dtd_5; }
	inline void set_dtd_5(DTDObjectModel_t3593115196 * value)
	{
		___dtd_5 = value;
		Il2CppCodeGenWriteBarrier(&___dtd_5, value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___resolver_6)); }
	inline XmlResolver_t3822670287 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t3822670287 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t3822670287 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_6, value);
	}

	inline static int32_t get_offset_of_currentElement_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___currentElement_7)); }
	inline String_t* get_currentElement_7() const { return ___currentElement_7; }
	inline String_t** get_address_of_currentElement_7() { return &___currentElement_7; }
	inline void set_currentElement_7(String_t* value)
	{
		___currentElement_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentElement_7, value);
	}

	inline static int32_t get_offset_of_attributes_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___attributes_8)); }
	inline AttributeSlotU5BU5D_t2048538274* get_attributes_8() const { return ___attributes_8; }
	inline AttributeSlotU5BU5D_t2048538274** get_address_of_attributes_8() { return &___attributes_8; }
	inline void set_attributes_8(AttributeSlotU5BU5D_t2048538274* value)
	{
		___attributes_8 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_8, value);
	}

	inline static int32_t get_offset_of_attributeCount_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___attributeCount_9)); }
	inline int32_t get_attributeCount_9() const { return ___attributeCount_9; }
	inline int32_t* get_address_of_attributeCount_9() { return &___attributeCount_9; }
	inline void set_attributeCount_9(int32_t value)
	{
		___attributeCount_9 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___currentAttribute_10)); }
	inline int32_t get_currentAttribute_10() const { return ___currentAttribute_10; }
	inline int32_t* get_address_of_currentAttribute_10() { return &___currentAttribute_10; }
	inline void set_currentAttribute_10(int32_t value)
	{
		___currentAttribute_10 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___consumedAttribute_11)); }
	inline bool get_consumedAttribute_11() const { return ___consumedAttribute_11; }
	inline bool* get_address_of_consumedAttribute_11() { return &___consumedAttribute_11; }
	inline void set_consumedAttribute_11(bool value)
	{
		___consumedAttribute_11 = value;
	}

	inline static int32_t get_offset_of_elementStack_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___elementStack_12)); }
	inline Stack_t1761758306 * get_elementStack_12() const { return ___elementStack_12; }
	inline Stack_t1761758306 ** get_address_of_elementStack_12() { return &___elementStack_12; }
	inline void set_elementStack_12(Stack_t1761758306 * value)
	{
		___elementStack_12 = value;
		Il2CppCodeGenWriteBarrier(&___elementStack_12, value);
	}

	inline static int32_t get_offset_of_automataStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___automataStack_13)); }
	inline Stack_t1761758306 * get_automataStack_13() const { return ___automataStack_13; }
	inline Stack_t1761758306 ** get_address_of_automataStack_13() { return &___automataStack_13; }
	inline void set_automataStack_13(Stack_t1761758306 * value)
	{
		___automataStack_13 = value;
		Il2CppCodeGenWriteBarrier(&___automataStack_13, value);
	}

	inline static int32_t get_offset_of_popScope_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___popScope_14)); }
	inline bool get_popScope_14() const { return ___popScope_14; }
	inline bool* get_address_of_popScope_14() { return &___popScope_14; }
	inline void set_popScope_14(bool value)
	{
		___popScope_14 = value;
	}

	inline static int32_t get_offset_of_isStandalone_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___isStandalone_15)); }
	inline bool get_isStandalone_15() const { return ___isStandalone_15; }
	inline bool* get_address_of_isStandalone_15() { return &___isStandalone_15; }
	inline void set_isStandalone_15(bool value)
	{
		___isStandalone_15 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___currentAutomata_16)); }
	inline DTDAutomata_t415542374 * get_currentAutomata_16() const { return ___currentAutomata_16; }
	inline DTDAutomata_t415542374 ** get_address_of_currentAutomata_16() { return &___currentAutomata_16; }
	inline void set_currentAutomata_16(DTDAutomata_t415542374 * value)
	{
		___currentAutomata_16 = value;
		Il2CppCodeGenWriteBarrier(&___currentAutomata_16, value);
	}

	inline static int32_t get_offset_of_previousAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___previousAutomata_17)); }
	inline DTDAutomata_t415542374 * get_previousAutomata_17() const { return ___previousAutomata_17; }
	inline DTDAutomata_t415542374 ** get_address_of_previousAutomata_17() { return &___previousAutomata_17; }
	inline void set_previousAutomata_17(DTDAutomata_t415542374 * value)
	{
		___previousAutomata_17 = value;
		Il2CppCodeGenWriteBarrier(&___previousAutomata_17, value);
	}

	inline static int32_t get_offset_of_idList_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___idList_18)); }
	inline ArrayList_t3948406897 * get_idList_18() const { return ___idList_18; }
	inline ArrayList_t3948406897 ** get_address_of_idList_18() { return &___idList_18; }
	inline void set_idList_18(ArrayList_t3948406897 * value)
	{
		___idList_18 = value;
		Il2CppCodeGenWriteBarrier(&___idList_18, value);
	}

	inline static int32_t get_offset_of_missingIDReferences_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___missingIDReferences_19)); }
	inline ArrayList_t3948406897 * get_missingIDReferences_19() const { return ___missingIDReferences_19; }
	inline ArrayList_t3948406897 ** get_address_of_missingIDReferences_19() { return &___missingIDReferences_19; }
	inline void set_missingIDReferences_19(ArrayList_t3948406897 * value)
	{
		___missingIDReferences_19 = value;
		Il2CppCodeGenWriteBarrier(&___missingIDReferences_19, value);
	}

	inline static int32_t get_offset_of_nsmgr_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___nsmgr_20)); }
	inline XmlNamespaceManager_t1467853467 * get_nsmgr_20() const { return ___nsmgr_20; }
	inline XmlNamespaceManager_t1467853467 ** get_address_of_nsmgr_20() { return &___nsmgr_20; }
	inline void set_nsmgr_20(XmlNamespaceManager_t1467853467 * value)
	{
		___nsmgr_20 = value;
		Il2CppCodeGenWriteBarrier(&___nsmgr_20, value);
	}

	inline static int32_t get_offset_of_currentTextValue_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___currentTextValue_21)); }
	inline String_t* get_currentTextValue_21() const { return ___currentTextValue_21; }
	inline String_t** get_address_of_currentTextValue_21() { return &___currentTextValue_21; }
	inline void set_currentTextValue_21(String_t* value)
	{
		___currentTextValue_21 = value;
		Il2CppCodeGenWriteBarrier(&___currentTextValue_21, value);
	}

	inline static int32_t get_offset_of_constructingTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___constructingTextValue_22)); }
	inline String_t* get_constructingTextValue_22() const { return ___constructingTextValue_22; }
	inline String_t** get_address_of_constructingTextValue_22() { return &___constructingTextValue_22; }
	inline void set_constructingTextValue_22(String_t* value)
	{
		___constructingTextValue_22 = value;
		Il2CppCodeGenWriteBarrier(&___constructingTextValue_22, value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___shouldResetCurrentTextValue_23)); }
	inline bool get_shouldResetCurrentTextValue_23() const { return ___shouldResetCurrentTextValue_23; }
	inline bool* get_address_of_shouldResetCurrentTextValue_23() { return &___shouldResetCurrentTextValue_23; }
	inline void set_shouldResetCurrentTextValue_23(bool value)
	{
		___shouldResetCurrentTextValue_23 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___isSignificantWhitespace_24)); }
	inline bool get_isSignificantWhitespace_24() const { return ___isSignificantWhitespace_24; }
	inline bool* get_address_of_isSignificantWhitespace_24() { return &___isSignificantWhitespace_24; }
	inline void set_isSignificantWhitespace_24(bool value)
	{
		___isSignificantWhitespace_24 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___isWhitespace_25)); }
	inline bool get_isWhitespace_25() const { return ___isWhitespace_25; }
	inline bool* get_address_of_isWhitespace_25() { return &___isWhitespace_25; }
	inline void set_isWhitespace_25(bool value)
	{
		___isWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isText_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___isText_26)); }
	inline bool get_isText_26() const { return ___isText_26; }
	inline bool* get_address_of_isText_26() { return &___isText_26; }
	inline void set_isText_26(bool value)
	{
		___isText_26 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___attributeValueEntityStack_27)); }
	inline Stack_t1761758306 * get_attributeValueEntityStack_27() const { return ___attributeValueEntityStack_27; }
	inline Stack_t1761758306 ** get_address_of_attributeValueEntityStack_27() { return &___attributeValueEntityStack_27; }
	inline void set_attributeValueEntityStack_27(Stack_t1761758306 * value)
	{
		___attributeValueEntityStack_27 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValueEntityStack_27, value);
	}

	inline static int32_t get_offset_of_valueBuilder_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___valueBuilder_28)); }
	inline StringBuilder_t243639308 * get_valueBuilder_28() const { return ___valueBuilder_28; }
	inline StringBuilder_t243639308 ** get_address_of_valueBuilder_28() { return &___valueBuilder_28; }
	inline void set_valueBuilder_28(StringBuilder_t243639308 * value)
	{
		___valueBuilder_28 = value;
		Il2CppCodeGenWriteBarrier(&___valueBuilder_28, value);
	}

	inline static int32_t get_offset_of_whitespaceChars_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476, ___whitespaceChars_29)); }
	inline CharU5BU5D_t3324145743* get_whitespaceChars_29() const { return ___whitespaceChars_29; }
	inline CharU5BU5D_t3324145743** get_address_of_whitespaceChars_29() { return &___whitespaceChars_29; }
	inline void set_whitespaceChars_29(CharU5BU5D_t3324145743* value)
	{
		___whitespaceChars_29 = value;
		Il2CppCodeGenWriteBarrier(&___whitespaceChars_29, value);
	}
};

struct DTDValidatingReader_t357394476_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map2A_30;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t357394476_StaticFields, ___U3CU3Ef__switchU24map2A_30)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map2A_30() const { return ___U3CU3Ef__switchU24map2A_30; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map2A_30() { return &___U3CU3Ef__switchU24map2A_30; }
	inline void set_U3CU3Ef__switchU24map2A_30(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map2A_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2A_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
