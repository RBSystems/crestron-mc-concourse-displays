namespace SimplSharpStringUtils;
        // class declarations
         class JsonExtensions;
         class StringUtils;
    static class JsonExtensions 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class StringUtils 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION NumberOfMembers ( STRING stringToParse , STRING separatingcharacter );
        STRING_FUNCTION GetMemberOfStringArray ( STRING stringToParse , STRING separatingcharacter , SIGNED_LONG_INTEGER positionToReturn );
        STRING_FUNCTION ToLower ( STRING source );
        STRING_FUNCTION ToUpper ( STRING source );
        STRING_FUNCTION Trim ( STRING source );
        STRING_FUNCTION Contains ( STRING source , STRING searchString );
        STRING_FUNCTION StartsWith ( STRING source , STRING searchString );
        STRING_FUNCTION EndsWith ( STRING source , STRING searchString );
        STRING_FUNCTION Replace ( STRING source , STRING replaceThis , STRING replaceWith );
        STRING_FUNCTION JSONAttributes ( STRING body , STRING desiredAttribute );
        STRING_FUNCTION SonyResult ( STRING body , STRING desiredAttribute );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

