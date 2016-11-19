#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_NEC_MultiSync_BYUv1.h"

FUNCTION_MAIN( S2_NEC_MultiSync_BYUv1 );
EVENT_HANDLER( S2_NEC_MultiSync_BYUv1 );
DEFINE_ENTRYPOINT( S2_NEC_MultiSync_BYUv1 );

static void S2_NEC_MultiSync_BYUv1__SEND ( ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x0D""\x0A""\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x0D""\x0A""\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 10000 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 10000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 139 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )    , 1  )  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 140 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT  )  , (Len( GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT  )  ) - 3))  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 142 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 )  ,2 , "%s"  , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT  )   )  ; 
    SetSerial( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_TODEVICE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 143 );
    CREATE_WAIT( S2_NEC_MultiSync_BYUv1, 10000, SENDWAIT );
    
    
    S2_NEC_MultiSync_BYUv1_Exit__SEND:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    /* End Free local function variables */
    
    }
    
DEFINE_WAITEVENT( S2_NEC_MultiSync_BYUv1, SENDWAIT )
    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___Wait1, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___Wait1 );
    
    SAVE_GLOBAL_POINTERS ;
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___Wait1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR___Wait1, 10000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 145 );
    Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 13, "\xFA\xE0""IO Timeout""\xFB") ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 146 );
    Globals->S2_NEC_MultiSync_BYUv1.__SENDING = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 147 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___Wait1 )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )   ,2 , "%s"  , __FN_DST_STR___Wait1 ) ; 
    

S2_NEC_MultiSync_BYUv1_Exit__SENDWAIT:
    
    /* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR___Wait1 );
    /* End Free local function variables */
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
static struct StringHdr_s* S2_NEC_MultiSync_BYUv1__CALCULATE_BCC ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __CMD ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __CMDLENGTH; 
    unsigned short  __I; 
    unsigned short  __RESULT; 
    short __FN_FOREND_VAL__1; 
    short __FN_FORINIT_VAL__1; 
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 167 );
    __CMDLENGTH = Len( LOCAL_STRING_STRUCT( __CMD  )  ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 168 );
    __RESULT = Byte( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __CMD  )  , 1 ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 170 );
    __FN_FOREND_VAL__1 = __CMDLENGTH; 
    __FN_FORINIT_VAL__1 = 1; 
    for( __I = 2; (__FN_FORINIT_VAL__1 > 0)  ? ((short)__I  <= __FN_FOREND_VAL__1 ) : ((short)__I  >= __FN_FOREND_VAL__1) ; __I  += __FN_FORINIT_VAL__1) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 172 );
        __RESULT = (__RESULT ^ Byte( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __CMD  )  , __I )); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 170 );
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 175 );
    FormatString( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ),  __FN_DSTRET_STR__, 2, "%s", ( Chr (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , Low( __RESULT )) ) );
    goto S2_NEC_MultiSync_BYUv1_Exit__CALCULATE_BCC ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__CALCULATE_BCC:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    /* End Free local function variables */
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 178 );
    return __FN_DSTRET_STR__; 
    }
    
static void S2_NEC_MultiSync_BYUv1__ADDCOMMAND ( struct StringHdr_s* __CMD ) 
    { 
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x0D""\x0D""\x0A""\x0A""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    INITIALIZE_LOCAL_STRING_STRUCT( __RESULT, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x0D""\x0D""\x0A""\x0A""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__2, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 182 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,6 , "\x01""\x30""%s%s"  , Chr (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , Low( (GetIntegerParameter( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_MONITOR_ID_INTEGER_PARAMETER )  + 64) )) , LOCAL_STRING_STRUCT( __CMD  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 184 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__2 )    ,2 , "%s"  , S2_NEC_MultiSync_BYUv1__CALCULATE_BCC (  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  (struct StringHdr_s* )  Right ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , LOCAL_STRING_STRUCT( __TEMP  )  , (Len( LOCAL_STRING_STRUCT( __TEMP  )  ) - 1)) )  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __RESULT  )   ,2 , "%s"  , __FN_DST_STR__2 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 185 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,6 , "%s%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,  LOCAL_STRING_STRUCT( __RESULT  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 186 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )  ,  LOCAL_STRING_STRUCT( __TEMP  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 188 );
    if ( !( Globals->S2_NEC_MultiSync_BYUv1.__SENDING )) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 190 );
        Globals->S2_NEC_MultiSync_BYUv1.__SENDING = 1; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 191 );
        S2_NEC_MultiSync_BYUv1__SEND ( ) ; 
        } 
    
    
    S2_NEC_MultiSync_BYUv1_Exit__ADDCOMMAND:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __TEMP );
    FREE_LOCAL_STRING_STRUCT( __RESULT );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__2 );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    /* End Free local function variables */
    
    }
    
static void S2_NEC_MultiSync_BYUv1__OUTPUTSOURCERESULT ( unsigned short __I ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 197 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( __I) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 0) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 201 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 0) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 205 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 1) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 209 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 2) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 213 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 3) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 217 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 4) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 221 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 5) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 225 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 6) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 12) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 229 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 7) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 233 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 8) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 10) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 237 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 9) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 17) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 241 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 10) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 18) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 245 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 11) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 19) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 249 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 12) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 15) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 253 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 13) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 13) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 257 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT, 14) ; 
                } 
            
            else 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 261 );
                Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 33, "\xFA\xE0""Error Unrecognized input value""\xFB") ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__OUTPUTSOURCERESULT:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
static void S2_NEC_MultiSync_BYUv1__OUTPUTANALOGCAPTIONRESULT ( unsigned short __I ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 268 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( __I) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 272 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 0) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 276 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 1) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 280 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 2) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 284 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 3) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 288 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 4) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 292 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 5) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 296 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 6) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 8) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 300 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 7) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 9) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 304 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 8) ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__OUTPUTANALOGCAPTIONRESULT:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
static void S2_NEC_MultiSync_BYUv1__OUTPUTDIGITALCAPTIONRESULT ( unsigned short __I ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 311 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( __I) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 315 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 0) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 319 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 1) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 323 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 2) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 327 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 3) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 331 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 4) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 335 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 5) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 339 );
                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT, 6) ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__OUTPUTDIGITALCAPTIONRESULT:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
static void S2_NEC_MultiSync_BYUv1__PROCESSRESPONSE ( struct StringHdr_s* __CMD ) 
    { 
    /* Begin local function variable declarations */
    
    unsigned short  __RESULT; 
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TVCH$, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TVCH$ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "02" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "00" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "D600" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "1" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "C203D6" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "4" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "C32C" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "C22C" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "02BE" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "2" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "0062" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "0060" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "008D" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "1084" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "10A1" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_15__, sizeof( "00FB" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_15__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 65535 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TVCH$ );
    INITIALIZE_LOCAL_STRING_STRUCT( __TVCH$, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "02" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "00" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "D600" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "1" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "C203D6" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "4" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "C32C" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "C22C" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "02BE" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "2" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "0062" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "0060" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "008D" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "1084" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "10A1" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_15__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__, "00FB" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 65535 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 65535 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 350 );
    Globals->S2_NEC_MultiSync_BYUv1.__RX_MESSAGETYPE = Byte( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __CMD  )  , 5 ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 353 );
    Globals->S2_NEC_MultiSync_BYUv1.__RX_MESSAGELENGTH = ((16 * hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 6 , 1 ) )) + hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__1 )  , LOCAL_STRING_STRUCT( __CMD  )  , 7 , 1 ) )); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 354 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 )  ,27 , "RX Found Message Length: %u"  , (unsigned short )( Globals->S2_NEC_MultiSync_BYUv1.__RX_MESSAGELENGTH ) )  ; 
    SetSerial( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_MESSAGE_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 355 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( Globals->S2_NEC_MultiSync_BYUv1.__RX_MESSAGETYPE) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 66) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 359 );
                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 2 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 361 );
                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 2 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 363 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 13 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 365 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 24 , 1 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 367 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_ON_DIG_OUTPUT ) ; 
                                } 
                            
                            else 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 371 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_OFF_DIG_OUTPUT ) ; 
                                } 
                            
                            } 
                        
                        } 
                    
                    else 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 377 );
                        Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 41, "\xFA\xE0""Error received while executing command""\xFB") ; 
                        } 
                    
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 380 );
                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 2 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 382 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 6 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 384 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 20 , 1 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 386 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_ON_DIG_OUTPUT ) ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 388 );
                                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 20 , 1 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 390 );
                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_OFF_DIG_OUTPUT ) ; 
                                    } 
                                
                                }
                            
                            } 
                        
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 394 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 396 );
                            Globals->S2_NEC_MultiSync_BYUv1.__TVCHMAJOR = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 17 , 4 ) ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 397 );
                            Globals->S2_NEC_MultiSync_BYUv1.__TVCHMINOR = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 21 , 4 ) ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 398 );
                            FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,5 , "%d.%d"  , (short)( Globals->S2_NEC_MultiSync_BYUv1.__TVCHMAJOR ), (short)( Globals->S2_NEC_MultiSync_BYUv1.__TVCHMINOR ) )  ; 
                            FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TVCH$  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 399 );
                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ) == 0 ) {
                            FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __TVCH$  )   )  ; 
                            SetSerial( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_CHANNEL_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 ) );
                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); }
                            
                            ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 400 );
                            SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_MAJORCH_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.__TVCHMAJOR) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 401 );
                            SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_MINORCH_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.__TVCHMINOR) ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 403 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 405 );
                                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,2 , "" , __FN_DST_STR__  )  ; 
                                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TVCH$  )   ,2 , "%s" , __FN_DST_STR__  ) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 406 );
                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ) == 0 ) {
                                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __TVCH$  )   )  ; 
                                SetSerial( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_SELECTED_CHANNEL_TEXT_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_NEC_MultiSync_BYUv1 ) );
                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); }
                                
                                ; 
                                } 
                            
                            else 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 410 );
                                Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 41, "\xFA\xE0""Error received while executing command""\xFB") ; 
                                } 
                            
                            }
                        
                        }
                    
                    }
                
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 68) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 415 );
                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 2 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 417 );
                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 419 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 18 , 1 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 421 );
                            Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_ON_DIG_OUTPUT ) ; 
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 423 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 18 , 1 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 425 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_POWER_IS_OFF_DIG_OUTPUT ) ; 
                                } 
                            
                            }
                        
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 428 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 431 );
                            if ( !( Globals->S2_NEC_MultiSync_BYUv1.___MUTED )) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 433 );
                                Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 434 );
                                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.___VOLUME) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 435 );
                                if ( (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 437 );
                                    Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 1; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 438 );
                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_ON_DIG_OUTPUT ) ; 
                                    } 
                                
                                else 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 442 );
                                    Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 443 );
                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT ) ; 
                                    } 
                                
                                } 
                            
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 447 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 449 );
                                S2_NEC_MultiSync_BYUv1__OUTPUTSOURCERESULT ( hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) )) ; 
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 451 );
                                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 453 );
                                    __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 454 );
                                    if ( (__RESULT == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 456 );
                                        Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 457 );
                                        Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT ) ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 460 );
                                        if ( (__RESULT == 1)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 462 );
                                            Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 1; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 463 );
                                            Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = 0; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 464 );
                                            SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, 0) ; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 465 );
                                            Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_ON_DIG_OUTPUT ) ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 467 );
                                            if ( (__RESULT == 2)) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 469 );
                                                Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 470 );
                                                SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.___VOLUME) ; 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 471 );
                                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT ) ; 
                                                } 
                                            
                                            }
                                        
                                        }
                                    
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 474 );
                                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ ) , 1 ) == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 476 );
                                        __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 477 );
                                        S2_NEC_MultiSync_BYUv1__OUTPUTANALOGCAPTIONRESULT ( __RESULT) ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 479 );
                                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ ) , 1 ) == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 481 );
                                            __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 482 );
                                            S2_NEC_MultiSync_BYUv1__OUTPUTDIGITALCAPTIONRESULT ( __RESULT) ; 
                                            } 
                                        
                                        else 
                                            {
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 484 );
                                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ ) , 1 ) == 0)) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 486 );
                                                __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 487 );
                                                if ( (__RESULT == 1)) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 489 );
                                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_LOCKED_DIG_OUTPUT ) ; 
                                                    } 
                                                
                                                else 
                                                    {
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 491 );
                                                    if ( (__RESULT == 0)) 
                                                        { 
                                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 493 );
                                                        Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_UNLOCKED_DIG_OUTPUT ) ; 
                                                        } 
                                                    
                                                    }
                                                
                                                } 
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    } 
                
                else 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 499 );
                    Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 45, "\xFA\xE0""Error received while retrieving value:\r\n%s""\xFB", LOCAL_STRING_STRUCT( __CMD  )  ) ; 
                    } 
                
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 70) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 504 );
                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 9 , 2 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 506 );
                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 508 );
                        __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 509 );
                        S2_NEC_MultiSync_BYUv1__OUTPUTSOURCERESULT ( __RESULT) ; 
                        } 
                    
                    else 
                        {
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 511 );
                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 513 );
                            Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 514 );
                            SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.___VOLUME) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 515 );
                            if ( (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 517 );
                                Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 1; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 518 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_ON_DIG_OUTPUT ) ; 
                                } 
                            
                            else 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 522 );
                                Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 523 );
                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT ) ; 
                                } 
                            
                            } 
                        
                        else 
                            {
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 526 );
                            if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 528 );
                                __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 529 );
                                if ( (__RESULT == 1)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 531 );
                                    Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 1; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 532 );
                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_ON_DIG_OUTPUT ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 533 );
                                    SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, 0) ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 535 );
                                    if ( (__RESULT == 2)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 537 );
                                        Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 538 );
                                        Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT ) ; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 539 );
                                        if ( (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 541 );
                                            Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = 1; 
                                            } 
                                        
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 543 );
                                        SetAnalog ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT, Globals->S2_NEC_MultiSync_BYUv1.___VOLUME) ; 
                                        } 
                                    
                                    }
                                
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 546 );
                                if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 548 );
                                    __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 549 );
                                    S2_NEC_MultiSync_BYUv1__OUTPUTANALOGCAPTIONRESULT ( __RESULT) ; 
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 551 );
                                    if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ ) , 1 ) == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 553 );
                                        __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 554 );
                                        S2_NEC_MultiSync_BYUv1__OUTPUTDIGITALCAPTIONRESULT ( __RESULT) ; 
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 556 );
                                        if ( (CompareStrings( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 11 , 4 ), LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ ) , 1 ) == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 558 );
                                            __RESULT = hextoi( Mid( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __FN_DST_STR__ )  , LOCAL_STRING_STRUCT( __CMD  )  , 23 , 2 ) ); 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 559 );
                                            if ( (__RESULT == 1)) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 561 );
                                                Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_LOCKED_DIG_OUTPUT ) ; 
                                                } 
                                            
                                            else 
                                                {
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 563 );
                                                if ( (__RESULT == 0)) 
                                                    { 
                                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 565 );
                                                    Pulse ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 10, __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_UNLOCKED_DIG_OUTPUT ) ; 
                                                    } 
                                                
                                                }
                                            
                                            } 
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    } 
                
                else 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 571 );
                    Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 37, "\xFA\xE0""Error received while Setting value""\xFB") ; 
                    } 
                
                } 
            
            else 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 576 );
                Print( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , 38, "\xFA\xE0""Error Unrecognized command response""\xFB") ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__PROCESSRESPONSE:
/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __TVCH$ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ );
    /* End Free local function variables */
    
    }
    
DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00000 /*Poll_Main_Info*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x30""\x31""\x44""\x36""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x38""\x44""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x30""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x46""\x42""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x36""\x02""\x30""\x31""\x44""\x36""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x38""\x44""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x30""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x46""\x42""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 588 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 589 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 590 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 591 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 597 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 598 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00001 /*Poll_Main_Info_No_Volume*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x30""\x31""\x44""\x36""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x38""\x44""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x30""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x46""\x42""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x36""\x02""\x30""\x31""\x44""\x36""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x38""\x44""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x36""\x30""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x43""\x30""\x36""\x02""\x30""\x30""\x46""\x42""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 604 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 605 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 606 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 612 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 613 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_1:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00002 /*Turn_Power_On*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x31""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 618 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_2:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00003 /*Turn_Power_Off*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x34""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x34""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 623 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_3:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00004 /*Turn_Mute_On*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""\x30""\x30""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""\x30""\x30""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 628 );
    Globals->S2_NEC_MultiSync_BYUv1.___VOLUMEBEFOREMUTED = Globals->S2_NEC_MultiSync_BYUv1.___VOLUME; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 629 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_4:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00005 /*Turn_Mute_Off*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP2, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__2, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 635 );
    Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = Globals->S2_NEC_MultiSync_BYUv1.___VOLUMEBEFOREMUTED; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 636 );
    if ( (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME == 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 638 );
        Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = 1; 
        } 
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 640 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%02X"  , Globals->S2_NEC_MultiSync_BYUv1.___VOLUME )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP2  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 641 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__2 )    ,16 , "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""%s%s\x03"""  , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 1, 1) , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 2, 1)  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__2 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 642 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __TEMP  )  ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_5:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __TEMP2 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__2 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00006 /*Save_Current_Settings*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x34""\x02""\x30""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x34""\x02""\x30""\x43""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 647 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_6:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00007 /*Set_TV_Channel*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x34""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x30""\x33""\x44""\x36""\x30""\x30""\x30""\x34""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 652 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_7:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00008 /*TV_Channel_Up*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x38""\x42""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x38""\x42""\x30""\x30""\x30""\x31""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 657 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 658 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_8:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00009 /*TV_Channel_Down*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x38""\x42""\x30""\x30""\x30""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    INITIALIZE_LOCAL_STRING_STRUCT( __RESULT, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x38""\x42""\x30""\x30""\x30""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x41""\x30""\x36""\x02""\x43""\x32""\x32""\x43""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 665 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 666 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_9:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __RESULT );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000A /*Lock_Control_Button*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x46""\x42""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x46""\x42""\x30""\x30""\x30""\x31""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 671 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_10:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000B /*Unlock_Control_Button*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x46""\x42""\x30""\x30""\x30""\x30""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x46""\x42""\x30""\x30""\x30""\x30""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 676 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_11:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000C /*Toggle_Power*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x30""\x33""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x30""\x33""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 682 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_12:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000D /*Toggle_Mute*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x42""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x42""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 687 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_13:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000E /*Vol_Up*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP2, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__2, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 696 );
    if ( ((Globals->S2_NEC_MultiSync_BYUv1.___VOLUME < 100) && !( Globals->S2_NEC_MultiSync_BYUv1.___MUTED ))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 698 );
        Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME + 1); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 699 );
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%02X"  , Globals->S2_NEC_MultiSync_BYUv1.___VOLUME )  ; 
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP2  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 700 );
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__2 )    ,16 , "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""%s%s\x03"""  , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 1, 1) , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 2, 1)  )  ; 
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__2 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 701 );
        S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __TEMP  )  ) ; 
        } 
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_14:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __TEMP2 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__2 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000F /*Vol_Down*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP2, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__2, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 711 );
    if ( ((Globals->S2_NEC_MultiSync_BYUv1.___VOLUME > 0) && !( Globals->S2_NEC_MultiSync_BYUv1.___MUTED ))) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 713 );
        if ( (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME == 1)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 715 );
            Globals->S2_NEC_MultiSync_BYUv1.___VOLUMEBEFOREMUTED = Globals->S2_NEC_MultiSync_BYUv1.___VOLUME; 
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 717 );
        Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = (Globals->S2_NEC_MultiSync_BYUv1.___VOLUME - 1); 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 718 );
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%02X"  , Globals->S2_NEC_MultiSync_BYUv1.___VOLUME )  ; 
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP2  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 719 );
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__2 )    ,16 , "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""%s%s\x03"""  , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 1, 1) , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 2, 1)  )  ; 
        FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__2 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 720 );
        S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __TEMP  )  ) ; 
        } 
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_15:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __TEMP2 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__2 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00010 /*Guide*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x33""\x34""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x33""\x34""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 726 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_16:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00011 /*Guide*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x33""\x34""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x33""\x34""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 731 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_17:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00012 /*Numeric_Format*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x34""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x34""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 736 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_18:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00013 /*Numberic_Ent*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x35""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x35""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 741 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_19:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00014 /*Display*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x39""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x39""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 746 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_20:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00015 /*Menu*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x30""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x30""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 751 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_21:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00016 /*Exit*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x46""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x46""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 756 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_22:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00017 /*AutoSetup*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x43""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x43""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 761 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_23:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00018 /*Up*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x35""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x35""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 766 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_24:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00019 /*Down*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x34""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x34""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 771 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_25:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001A /*Left_D*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x31""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x31""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 776 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_26:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001B /*Right_D*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x32""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x32""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 781 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_27:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001C /*SetButton*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x33""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x33""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 786 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_28:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001D /*Picture_Mode*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x44""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x31""\x44""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 791 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_29:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001E /*Aspect*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x39""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x32""\x39""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 796 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_30:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001F /*Sound*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x33""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""\x34""\x33""\x30""\x33""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 801 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_31:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00020 /*Numbers*/ )

    {
    /* Begin local function variable declarations */
    
    unsigned short  __I; 
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x38""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x39""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x41""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x42""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x43""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "\x30""\x44""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "\x30""\x45""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "\x30""\x46""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "\x31""\x30""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "\x31""\x32""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x38""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x39""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x41""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x42""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x43""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "\x30""\x44""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "\x30""\x45""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "\x30""\x46""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "\x31""\x30""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "\x31""\x32""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "\x30""\x33""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 808 );
    __I = GetLocalLastModifiedArrayIndex ( S2_NEC_MultiSync_BYUv1 ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 809 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,11 , "\x30""\x41""\x30""\x43""\x02""\x43""\x32""\x31""\x30""\x30""\x30""" , __FN_DST_STR__  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s" , __FN_DST_STR__  ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 811 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( __I) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 815 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 819 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 823 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 827 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 831 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 835 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 839 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 8) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 843 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 9) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 847 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 10) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 851 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )    )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
                } 
            
            } 
            
        }
        
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 855 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , LOCAL_STRING_STRUCT( __TEMP  )  ,   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 856 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __TEMP  )  ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_32:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00021 /*Change_Source*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x30""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x35""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x36""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x37""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x43""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x34""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x41""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x46""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x44""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESULT );
    INITIALIZE_LOCAL_STRING_STRUCT( __RESULT, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x30""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x31""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x33""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x35""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x36""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x37""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x43""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x34""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x41""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x31""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x31""\x33""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x46""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x30""\x30""\x30""\x30""\x44""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 863 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_SOURCE_ANALOG_INPUT )) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 0) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 867 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 871 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 875 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 879 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 883 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 887 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 891 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 895 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 8) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 899 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 9) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 903 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 10) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 907 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 11) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 911 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 12) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 915 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 13) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 919 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 14) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 923 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_33:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __RESULT );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00022 /*Change_Volume_Level*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2, 50 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __TEMP2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __TEMP2, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 50 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__2 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__2, 50 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 932 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%02X"  , GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_VOLUME_LEVEL_ANALOG_INPUT ) )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP2  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 934 );
    Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_VOLUME_LEVEL_ANALOG_INPUT ); 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 935 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__2 )    ,16 , "\x30""\x45""\x30""\x41""\x02""\x30""\x30""\x36""\x32""\x30""\x30""%s%s\x03"""  , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 1, 1) , Mid ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    , LOCAL_STRING_STRUCT( __TEMP2  )  , 2, 1)  )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , LOCAL_STRING_STRUCT( __TEMP  )   ,2 , "%s"  , __FN_DST_STR__2 ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 936 );
    S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __TEMP  )  ) ; 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_34:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __TEMP );
FREE_LOCAL_STRING_STRUCT( __TEMP2 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__2 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00023 /*Change_TV_Channel*/ )

    {
    /* Begin local function variable declarations */
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 941 );
    Globals->S2_NEC_MultiSync_BYUv1.__CURRENTTVCHANNEL = GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_TV_CHANNEL_ANALOG_INPUT ); 
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_35:
    /* Begin Free local function variables */
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00024 /*Change_Analog_Closed_Caption*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x34""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x35""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x36""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x31""\x37""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x38""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x39""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x31""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x33""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x34""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x35""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x36""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x31""\x37""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x38""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x38""\x34""\x30""\x30""\x30""\x39""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 946 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_SOURCE_ANALOG_INPUT )) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 0) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 950 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 954 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 958 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 962 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 966 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 970 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 974 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 7) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 978 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 8) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 982 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_36:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00025 /*Change_Digital_Closed_Caption*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x31""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x32""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x33""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x34""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x35""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x36""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x31""\x37""\x03""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x31""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x32""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x33""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x34""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x35""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x30""\x36""\x03""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "\x30""\x45""\x30""\x41""\x02""\x31""\x30""\x41""\x31""\x30""\x30""\x31""\x37""\x03""" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 989 );
    
        {
        int __SPLS_TMPVAR__SWTCH_1__ = ( GetAnalogInput( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), __S2_NEC_MultiSync_BYUv1_CHANGE_SOURCE_ANALOG_INPUT )) ;
        
            { 
            if ( __SPLS_TMPVAR__SWTCH_1__ == ( 0) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 993 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 1) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 997 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 2) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1001 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 3) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1005 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 4) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1009 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 5) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1013 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ) ; 
                } 
            
            else if ( __SPLS_TMPVAR__SWTCH_1__ == ( 6) )
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1017 );
                S2_NEC_MultiSync_BYUv1__ADDCOMMAND (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
                } 
            
            } 
            
        }
        
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_37:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00026 /*FromDevice*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\x0D""" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\x0D""" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 10000 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 10000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1024 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,4 , "%s%s"  , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )  ,  GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FROMDEVICE  )   )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )   ,2 , "%s"  , __FN_DST_STR__ ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1025 );
    ClearBuffer ( GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FROMDEVICE  )  ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1027 );
    if ( Globals->S2_NEC_MultiSync_BYUv1.__RXOK) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1029 );
        Globals->S2_NEC_MultiSync_BYUv1.__RXOK = 0; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1030 );
        while ( Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )  , 1 , 1 )) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1032 );
            Globals->S2_NEC_MultiSync_BYUv1.__RX_MARKER3 = Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )  , 1 , 1 ); 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1033 );
            if ( Globals->S2_NEC_MultiSync_BYUv1.__RX_MARKER3) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1035 );
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , RemoveByLength ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , Globals->S2_NEC_MultiSync_BYUv1.__RX_MARKER3, GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )  )  )  ; 
                FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_MESSAGE  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1036 );
                CancelWait ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), "SENDWAIT" ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1037 );
                S2_NEC_MultiSync_BYUv1__PROCESSRESPONSE (  (struct StringHdr_s* )  GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_MESSAGE  )  ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1038 );
                if ( Len( GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )  )) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1040 );
                    S2_NEC_MultiSync_BYUv1__SEND ( ) ; 
                    } 
                
                else 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1044 );
                    Globals->S2_NEC_MultiSync_BYUv1.__SENDING = 0; 
                    } 
                
                } 
            
            UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1030 );
            } 
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1048 );
        Globals->S2_NEC_MultiSync_BYUv1.__RXOK = 1; 
        } 
    
    
    S2_NEC_MultiSync_BYUv1_Exit__Event_38:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


    
    

/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_NEC_MultiSync_BYUv1_POLL_MAIN_INFO_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00000 /*Poll_Main_Info*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_POLL_MAIN_INFO_NO_VOLUME_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00001 /*Poll_Main_Info_No_Volume*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TURN_POWER_ON_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00002 /*Turn_Power_On*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TURN_POWER_OFF_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00003 /*Turn_Power_Off*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TURN_MUTE_ON_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00004 /*Turn_Mute_On*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TURN_MUTE_OFF_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00005 /*Turn_Mute_Off*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_SAVE_CURRENT_SETTINGS_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00006 /*Save_Current_Settings*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_SET_TV_CHANNEL_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00007 /*Set_TV_Channel*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TV_CHANNEL_UP_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00008 /*TV_Channel_Up*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TV_CHANNEL_DOWN_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00009 /*TV_Channel_Down*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_LOCK_CONTROL_BUTTON_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000A /*Lock_Control_Button*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_UNLOCK_CONTROL_BUTTON_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000B /*Unlock_Control_Button*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TOGGLE_POWER_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000C /*Toggle_Power*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_TOGGLE_MUTE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000D /*Toggle_Mute*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_VOL_UP_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000E /*Vol_Up*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_VOL_DOWN_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0000F /*Vol_Down*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_GUIDE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00010 /*Guide*/, 0 );
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00011 /*Guide*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_NUMERIC_FORMAT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00012 /*Numeric_Format*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_NUMBERIC_ENT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00013 /*Numberic_Ent*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_DISPLAY_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00014 /*Display*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_MENU_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00015 /*Menu*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_EXIT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00016 /*Exit*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_AUTOSETUP_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00017 /*AutoSetup*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_UP_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00018 /*Up*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_DOWN_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00019 /*Down*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_LEFT_D_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001A /*Left_D*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_RIGHT_D_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001B /*Right_D*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_SETBUTTON_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001C /*SetButton*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_PICTURE_MODE_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001D /*Picture_Mode*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_ASPECT_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001E /*Aspect*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_SOUND_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 0001F /*Sound*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        case __S2_NEC_MultiSync_BYUv1_NUMBERS_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00020 /*Numbers*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_NEC_MultiSync_BYUv1_CHANGE_SOURCE_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00021 /*Change_Source*/, 0 );
            break;
            
        case __S2_NEC_MultiSync_BYUv1_CHANGE_VOLUME_LEVEL_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00022 /*Change_Volume_Level*/, 0 );
            break;
            
        case __S2_NEC_MultiSync_BYUv1_CHANGE_TV_CHANNEL_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00023 /*Change_TV_Channel*/, 0 );
            break;
            
        case __S2_NEC_MultiSync_BYUv1_CHANGE_ANALOG_CLOSED_CAPTION_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00024 /*Change_Analog_Closed_Caption*/, 0 );
            break;
            
        case __S2_NEC_MultiSync_BYUv1_CHANGE_DIGITAL_CLOSED_CAPTION_ANALOG_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00025 /*Change_Digital_Closed_Caption*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_NEC_MultiSync_BYUv1 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        case __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_NEC_MultiSync_BYUv1, 00026 /*FromDevice*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_NEC_MultiSync_BYUv1 ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_NEC_MultiSync_BYUv1 )
********************************************************************************/
EVENT_HANDLER( S2_NEC_MultiSync_BYUv1 )
    {
    SAVE_GLOBAL_POINTERS ;
    CHECK_INPUT_ARRAY ( S2_NEC_MultiSync_BYUv1, __NUMBERS ) ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_NEC_MultiSync_BYUv1 )
********************************************************************************/
FUNCTION_MAIN( S2_NEC_MultiSync_BYUv1 )
{
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___M, 10000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___M );
    
    SAVE_GLOBAL_POINTERS ;
    SET_INSTANCE_POINTER ( S2_NEC_MultiSync_BYUv1 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FN_DST_STR___M );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR___M, 10000 );
    
    
    /* End local function variable declarations */
    
    INITIALIZE_IO_ARRAY ( S2_NEC_MultiSync_BYUv1, __NUMBERS, IO_TYPE_DIGITAL_INPUT, __S2_NEC_MultiSync_BYUv1_NUMBERS_DIG_INPUT, __S2_NEC_MultiSync_BYUv1_NUMBERS_ARRAY_LENGTH );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __FROMDEVICE, e_INPUT_TYPE_BUFFER, __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_MAX_LEN );
    REGISTER_GLOBAL_INPUT_STRING ( S2_NEC_MultiSync_BYUv1, __FROMDEVICE, __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_INPUT );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_RESPONSESTRING_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_COMMANDSTRING_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_COMMANDTOBESENT_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __RX_HEADER, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_RX_HEADER_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __RX_MESSAGE, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_RX_MESSAGE_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, __RX_TRASH, e_INPUT_TYPE_NONE, __S2_NEC_MultiSync_BYUv1_RX_TRASH_STRING_MAX_LEN );
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_NEC_MultiSync_BYUv1, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    REGISTER_GLOBAL_INPUT_STRING ( S2_NEC_MultiSync_BYUv1, __FROMDEVICE, __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_INPUT );
    
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1061 );
    Globals->S2_NEC_MultiSync_BYUv1.__RXOK = 1; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1062 );
    Globals->S2_NEC_MultiSync_BYUv1.__RX_MESSAGELENGTH = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1063 );
    Globals->S2_NEC_MultiSync_BYUv1.__RX_MARKER1 = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1064 );
    Globals->S2_NEC_MultiSync_BYUv1.__RX_MARKER2 = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1065 );
    Globals->S2_NEC_MultiSync_BYUv1.__SENDING = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1066 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING  )   ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1067 );
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR___M )    ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    FormatString ( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ) , GLOBAL_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING  )   ,2 , "%s"  , __FN_DST_STR___M ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1068 );
    Globals->S2_NEC_MultiSync_BYUv1.___VOLUME = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1069 );
    Globals->S2_NEC_MultiSync_BYUv1.___MUTED = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1070 );
    Globals->S2_NEC_MultiSync_BYUv1.___VOLUMEBEFOREMUTED = 0; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_NEC_MultiSync_BYUv1 ), 1071 );
    Globals->S2_NEC_MultiSync_BYUv1.__CURRENTTVCHANNEL = 0; 
    
    S2_NEC_MultiSync_BYUv1_Exit__MAIN:/* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    FREE_LOCAL_STRING_STRUCT( __FN_DST_STR___M );
    /* End Free local function variables */
    
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
