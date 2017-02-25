using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;
using SimplSharpNetUtils;

namespace UserModule_SONY_API_CONTROL
{
    public class UserModuleClass_SONY_API_CONTROL : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        
        
        
        Crestron.Logos.SplusObjects.StringInput PSK__DOLLAR__;
        Crestron.Logos.SplusObjects.StringInput IPADDRESS;
        Crestron.Logos.SplusObjects.StringInput TVCHANNEL;
        Crestron.Logos.SplusObjects.StringInput PARSERX;
        Crestron.Logos.SplusObjects.AnalogInput SETVOLUMEVALUE;
        Crestron.Logos.SplusObjects.AnalogOutput VOLUMEVALUE;
        Crestron.Logos.SplusObjects.StringOutput ERR_MSG__DOLLAR__;
        Crestron.Logos.SplusObjects.StringOutput RX__DOLLAR__;
        Crestron.Logos.SplusObjects.DigitalOutput ERR;
        CrestronString PSK;
        CrestronString IP;
        CrestronString BODY;
        CrestronString TVCH;
        CrestronString RX;
        CrestronString URL;
        ushort VOLUME = 0;
        SimplSharpNetUtils.HTTPRequest CLIENT;
        private void LOG (  SplusExecutionContext __context__, CrestronString MSG ) 
            { 
            
            __context__.SourceCodeLine = 67;
            Print( "\r\n{0}", MSG ) ; 
            
            }
            
        private void ERROR (  SplusExecutionContext __context__, CrestronString MSG ) 
            { 
            
            __context__.SourceCodeLine = 72;
            LOG (  __context__ , MSG) ; 
            
            }
            
        private void SENDMESSAGE (  SplusExecutionContext __context__, CrestronString RESOURCE , CrestronString BODY ) 
            { 
            int RESULT = 0;
            
            
            __context__.SourceCodeLine = 92;
            RESULT = (int) ( CLIENT.SendCommand( URL .ToString() , RESOURCE .ToString() , BODY .ToString() , PSK .ToString() ) ) ; 
            
            }
            
        private void GETAPIINFO (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 261;
            BODY  .UpdateValue ( "{ \"id\": 5, \"method\": \"getSupportedApiInfo\", \"params\": [{ \"services\": [\"system\", \"avContent\", \"guide\", \"accessControl\", \"appControl\", \"audio\", \"avContent\", \"browser\", \"encryption\", \"notification\", \"recording\", \"system\", \"videoScreen\", \"cec\", \"photoshare\", \"broadcastLink\", \"contentshare\",]}], \"version\": \"1.0\"}"  ) ; 
            __context__.SourceCodeLine = 262;
            SENDMESSAGE (  __context__ , "guide", BODY) ; 
            
            }
            
        object PSK__DOLLAR___OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 433;
                PSK  .UpdateValue ( PSK__DOLLAR__  ) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object IPADDRESS_OnChange_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 438;
            IP  .UpdateValue ( IPADDRESS  ) ; 
            __context__.SourceCodeLine = 439;
            URL  .UpdateValue ( "http://" + IP  ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
public void ONRECEIVE ( SimplSharpString S ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusSimplSharpDelegateThreadStartCode();
        
        __context__.SourceCodeLine = 444;
        /* Trace( "On Rx$") */ ; 
        __context__.SourceCodeLine = 445;
        RX__DOLLAR__  .UpdateValue ( S  .ToString()  ) ; 
        
        
    }
    finally { ObjectFinallyHandler(); }
    }
    
public void ONERROR ( SimplSharpString S ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusSimplSharpDelegateThreadStartCode();
        
        __context__.SourceCodeLine = 450;
        /* Trace( "On Rx$") */ ; 
        __context__.SourceCodeLine = 451;
        RX__DOLLAR__  .UpdateValue ( S  .ToString()  ) ; 
        
        
    }
    finally { ObjectFinallyHandler(); }
    }
    
private void INIT (  SplusExecutionContext __context__ ) 
    { 
    
    __context__.SourceCodeLine = 456;
    // RegisterDelegate( CLIENT , ONRESPONSE , ONRECEIVE ) 
    CLIENT .OnResponse  = ONRECEIVE; ; 
    __context__.SourceCodeLine = 457;
    // RegisterDelegate( CLIENT , ONERROR , ONERROR ) 
    CLIENT .OnError  = ONERROR; ; 
    __context__.SourceCodeLine = 458;
    PSK  .UpdateValue ( ""  ) ; 
    __context__.SourceCodeLine = 459;
    IP  .UpdateValue ( ""  ) ; 
    
    }
    
public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 470;
        WaitForInitializationComplete ( ) ; 
        __context__.SourceCodeLine = 472;
        INIT (  __context__  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    PSK  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 32, this );
    IP  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 32, this );
    BODY  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 1024, this );
    TVCH  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 32, this );
    RX  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 65534, this );
    URL  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 1024, this );
    
    ERR = new Crestron.Logos.SplusObjects.DigitalOutput( ERR__DigitalOutput__, this );
    m_DigitalOutputList.Add( ERR__DigitalOutput__, ERR );
    
    SETVOLUMEVALUE = new Crestron.Logos.SplusObjects.AnalogInput( SETVOLUMEVALUE__AnalogSerialInput__, this );
    m_AnalogInputList.Add( SETVOLUMEVALUE__AnalogSerialInput__, SETVOLUMEVALUE );
    
    VOLUMEVALUE = new Crestron.Logos.SplusObjects.AnalogOutput( VOLUMEVALUE__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( VOLUMEVALUE__AnalogSerialOutput__, VOLUMEVALUE );
    
    PSK__DOLLAR__ = new Crestron.Logos.SplusObjects.StringInput( PSK__DOLLAR____AnalogSerialInput__, 32, this );
    m_StringInputList.Add( PSK__DOLLAR____AnalogSerialInput__, PSK__DOLLAR__ );
    
    IPADDRESS = new Crestron.Logos.SplusObjects.StringInput( IPADDRESS__AnalogSerialInput__, 32, this );
    m_StringInputList.Add( IPADDRESS__AnalogSerialInput__, IPADDRESS );
    
    TVCHANNEL = new Crestron.Logos.SplusObjects.StringInput( TVCHANNEL__AnalogSerialInput__, 32, this );
    m_StringInputList.Add( TVCHANNEL__AnalogSerialInput__, TVCHANNEL );
    
    PARSERX = new Crestron.Logos.SplusObjects.StringInput( PARSERX__AnalogSerialInput__, 65534, this );
    m_StringInputList.Add( PARSERX__AnalogSerialInput__, PARSERX );
    
    ERR_MSG__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( ERR_MSG__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( ERR_MSG__DOLLAR____AnalogSerialOutput__, ERR_MSG__DOLLAR__ );
    
    RX__DOLLAR__ = new Crestron.Logos.SplusObjects.StringOutput( RX__DOLLAR____AnalogSerialOutput__, this );
    m_StringOutputList.Add( RX__DOLLAR____AnalogSerialOutput__, RX__DOLLAR__ );
    
    
    PSK__DOLLAR__.OnSerialChange.Add( new InputChangeHandlerWrapper( PSK__DOLLAR___OnChange_0, false ) );
    IPADDRESS.OnSerialChange.Add( new InputChangeHandlerWrapper( IPADDRESS_OnChange_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    CLIENT  = new SimplSharpNetUtils.HTTPRequest();
    
    
}

public UserModuleClass_SONY_API_CONTROL ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint PSK__DOLLAR____AnalogSerialInput__ = 0;
const uint IPADDRESS__AnalogSerialInput__ = 1;
const uint TVCHANNEL__AnalogSerialInput__ = 2;
const uint PARSERX__AnalogSerialInput__ = 3;
const uint SETVOLUMEVALUE__AnalogSerialInput__ = 4;
const uint VOLUMEVALUE__AnalogSerialOutput__ = 0;
const uint ERR_MSG__DOLLAR____AnalogSerialOutput__ = 1;
const uint RX__DOLLAR____AnalogSerialOutput__ = 2;
const uint ERR__DigitalOutput__ = 0;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
