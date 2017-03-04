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
        
        
        
        
        
        Crestron.Logos.SplusObjects.DigitalInput POLL_MAIN_INFO;
        Crestron.Logos.SplusObjects.DigitalInput TURN_POWER_ON;
        Crestron.Logos.SplusObjects.DigitalInput TURN_POWER_OFF;
        Crestron.Logos.SplusObjects.DigitalInput TURN_MUTE_ON;
        Crestron.Logos.SplusObjects.DigitalInput TURN_MUTE_OFF;
        Crestron.Logos.SplusObjects.DigitalInput SET_TV_CHANNEL;
        Crestron.Logos.SplusObjects.DigitalInput TV_CHANNEL_UP;
        Crestron.Logos.SplusObjects.DigitalInput TV_CHANNEL_DOWN;
        Crestron.Logos.SplusObjects.StringInput PSK__DOLLAR__;
        Crestron.Logos.SplusObjects.StringInput IPADDRESS;
        Crestron.Logos.SplusObjects.StringInput TVCHANNEL;
        Crestron.Logos.SplusObjects.StringInput PARSERX;
        Crestron.Logos.SplusObjects.AnalogInput NEWMAJORCH;
        Crestron.Logos.SplusObjects.AnalogInput NEWMINORCH;
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
            
            __context__.SourceCodeLine = 85;
            Print( "\r\n{0}", MSG ) ; 
            
            }
            
        private void ERROR (  SplusExecutionContext __context__, CrestronString MSG ) 
            { 
            
            __context__.SourceCodeLine = 90;
            LOG (  __context__ , MSG) ; 
            
            }
            
        private void SENDMESSAGE (  SplusExecutionContext __context__, CrestronString RESOURCE , CrestronString BODY ) 
            { 
            int RESULT = 0;
            
            
            __context__.SourceCodeLine = 110;
            RESULT = (int) ( CLIENT.SendCommand( URL .ToString() , RESOURCE .ToString() , BODY .ToString() , PSK .ToString() ) ) ; 
            
            }
            
        private ushort GETPLAYINGCONTENTINFO (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 219;
            BODY  .UpdateValue ( "{\"id\":103,\"method\":\"getPlayingContentInfo\",\"params\":[],\"version\":\"1.0\"}"  ) ; 
            __context__.SourceCodeLine = 220;
            SENDMESSAGE (  __context__ , "avContent", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private ushort GETPOWERSTATUS (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 233;
            BODY  .UpdateValue ( "{\"id\":50,\"method\":\"getPowerStatus\",\"params\":[],\"version\":\"1.0\"}"  ) ; 
            __context__.SourceCodeLine = 234;
            SENDMESSAGE (  __context__ , "system", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private ushort SETPOWERSTATUS (  SplusExecutionContext __context__, ushort N ) 
            { 
            
            __context__.SourceCodeLine = 238;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (N == 1))  ) ) 
                { 
                __context__.SourceCodeLine = 240;
                BODY  .UpdateValue ( "{\"id\":55,\"method\":\"setPowerStatus\",\"params\":[{\"status\":true}],\"version\":\"1.0\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 242;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (N == 0))  ) ) 
                { 
                __context__.SourceCodeLine = 244;
                BODY  .UpdateValue ( "{\"id\":55,\"method\":\"setPowerStatus\",\"params\":[{\"status\":false}],\"version\":\"1.0\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 246;
            SENDMESSAGE (  __context__ , "system", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private void GETAPIINFO (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 294;
            BODY  .UpdateValue ( "{ \"id\": 5, \"method\": \"getSupportedApiInfo\", \"params\": [{ \"services\": [\"system\", \"avContent\", \"guide\", \"accessControl\", \"appControl\", \"audio\", \"avContent\", \"browser\", \"encryption\", \"notification\", \"recording\", \"system\", \"videoScreen\", \"cec\", \"photoshare\", \"broadcastLink\", \"contentshare\",]}], \"version\": \"1.0\"}"  ) ; 
            __context__.SourceCodeLine = 295;
            SENDMESSAGE (  __context__ , "guide", BODY) ; 
            
            }
            
        private ushort SETAUDIOMUTE (  SplusExecutionContext __context__, ushort MUTE ) 
            { 
            
            __context__.SourceCodeLine = 368;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (MUTE == 1))  ) ) 
                { 
                __context__.SourceCodeLine = 370;
                BODY  .UpdateValue ( "{\"id\":601,\"method\":\"setAudioMute\",\"params\":[{\"status\":false}],\"version\":\"1.0\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 372;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (MUTE == 0))  ) ) 
                { 
                __context__.SourceCodeLine = 374;
                BODY  .UpdateValue ( "{\"id\":601,\"method\":\"setAudioMute\",\"params\":[{\"status\":true}],\"version\":\"1.0\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 376;
            SENDMESSAGE (  __context__ , "audio", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private ushort SETAUDIOVOLUME (  SplusExecutionContext __context__, ushort VOL ) 
            { 
            
            __context__.SourceCodeLine = 384;
            MakeString ( BODY , "{{\"id\":601,\"method\":\"setAudioVolume\",\"params\":[{{\"volume\":\"{0:d}\",\"target\":\"speaker\"}}],\"version\":\"1.0\"}}", (ushort)VOL) ; 
            __context__.SourceCodeLine = 385;
            SENDMESSAGE (  __context__ , "audio", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private ushort SETPLAYCONTENT (  SplusExecutionContext __context__, CrestronString SRC__DOLLAR__ , ushort MAJORCH , ushort MINORCH ) 
            { 
            
            __context__.SourceCodeLine = 393;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI1") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "hdmi1") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI 1") )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 395;
                BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:hdmi?port=1\"}],\"version\":\"1.0\"}"  ) ; 
                } 
            
            else 
                {
                __context__.SourceCodeLine = 397;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI2") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "hdmi2") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI 2") )) ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 399;
                    BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:hdmi?port=2\"}],\"version\":\"1.0\"}"  ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 401;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI3") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "hdmi3") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI 3/ARC") )) ))  ) ) 
                        { 
                        __context__.SourceCodeLine = 403;
                        BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:hdmi?port=3\"}],\"version\":\"1.0\"}"  ) ; 
                        } 
                    
                    else 
                        {
                        __context__.SourceCodeLine = 405;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI4") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "hdmi4") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "HDMI 4") )) ))  ) ) 
                            { 
                            __context__.SourceCodeLine = 407;
                            BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:hdmi?port=4\"}],\"version\":\"1.0\"}"  ) ; 
                            } 
                        
                        else 
                            {
                            __context__.SourceCodeLine = 409;
                            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "Video 1") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "Composite") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "composite") )) ))  ) ) 
                                { 
                                __context__.SourceCodeLine = 411;
                                BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:composite?port=1\"}],\"version\":\"1.0\"}"  ) ; 
                                } 
                            
                            else 
                                {
                                __context__.SourceCodeLine = 413;
                                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "Video 2") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "Component") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "component") )) ))  ) ) 
                                    { 
                                    __context__.SourceCodeLine = 415;
                                    BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:component?port=1\"}],\"version\":\"1.0\"}"  ) ; 
                                    } 
                                
                                else 
                                    {
                                    __context__.SourceCodeLine = 417;
                                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "Screen Mirroring") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "widi") )) ))  ) ) 
                                        { 
                                        __context__.SourceCodeLine = 419;
                                        BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{\"uri\":\"extInput:widi?port=1\"}],\"version\":\"1.0\"}"  ) ; 
                                        } 
                                    
                                    else 
                                        {
                                        __context__.SourceCodeLine = 421;
                                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "TV") ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "tv") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "atscc") )) ) ) || Functions.TestForTrue ( Functions.BoolToInt (SRC__DOLLAR__ == "atsc") )) ))  ) ) 
                                            { 
                                            __context__.SourceCodeLine = 423;
                                            MakeString ( BODY , "{{\"id\":101,\"method\":\"setPlayContent\",\"params\":[{{\"uri\":\"tv:atscc?dispNum={0:d}.{1:d}&trip=0.{2:d}.{3:d}\"}}],\"version\":\"1.0\"}}", (ushort)MAJORCH, (ushort)MINORCH, (ushort)MAJORCH, (ushort)MINORCH) ; 
                                            } 
                                        
                                        }
                                    
                                    }
                                
                                }
                            
                            }
                        
                        }
                    
                    }
                
                }
            
            __context__.SourceCodeLine = 426;
            SENDMESSAGE (  __context__ , "avContent", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        private ushort SETPLAYTVCONTENT (  SplusExecutionContext __context__, ushort UPORDN ) 
            { 
            
            __context__.SourceCodeLine = 430;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (UPORDN == 1))  ) ) 
                { 
                __context__.SourceCodeLine = 432;
                BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayTvContent\",\"params\":[{\"channel\":{\"shift\":\"+1\"}}],\"version\":\"1.1\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 434;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (UPORDN == 0))  ) ) 
                { 
                __context__.SourceCodeLine = 436;
                BODY  .UpdateValue ( "{\"id\":101,\"method\":\"setPlayTvContent\",\"params\":[{\"channel\":{\"shift\":\"-1\"}}],\"version\":\"1.1\"}"  ) ; 
                } 
            
            __context__.SourceCodeLine = 438;
            SENDMESSAGE (  __context__ , "avContent", BODY) ; 
            
            return 0; // default return value (none specified in module)
            }
            
        object TURN_POWER_ON_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 513;
                SETPOWERSTATUS (  __context__ , (ushort)( 1 )) ; 
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object TURN_POWER_OFF_OnPush_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 517;
            SETPOWERSTATUS (  __context__ , (ushort)( 0 )) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object TURN_MUTE_ON_OnPush_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 521;
        SETAUDIOMUTE (  __context__ , (ushort)( 0 )) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object TURN_MUTE_OFF_OnPush_3 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 525;
        SETAUDIOMUTE (  __context__ , (ushort)( 1 )) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object SET_TV_CHANNEL_OnPush_4 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 529;
        SETPLAYCONTENT (  __context__ , "TV", (ushort)( NEWMAJORCH  .UshortValue ), (ushort)( NEWMINORCH  .UshortValue )) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object SETVOLUMEVALUE_OnChange_5 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        ushort AUDIOVOLUME = 0;
        
        
        __context__.SourceCodeLine = 534;
        AUDIOVOLUME = (ushort) ( SETVOLUMEVALUE  .UshortValue ) ; 
        __context__.SourceCodeLine = 535;
        SETAUDIOVOLUME (  __context__ , (ushort)( AUDIOVOLUME )) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object PSK__DOLLAR___OnChange_6 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 542;
        PSK  .UpdateValue ( PSK__DOLLAR__  ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

object IPADDRESS_OnChange_7 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 547;
        IP  .UpdateValue ( IPADDRESS  ) ; 
        __context__.SourceCodeLine = 548;
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
        
        __context__.SourceCodeLine = 553;
        /* Trace( "On Rx$") */ ; 
        __context__.SourceCodeLine = 554;
        RX__DOLLAR__  .UpdateValue ( S  .ToString()  ) ; 
        
        
    }
    finally { ObjectFinallyHandler(); }
    }
    
public void ONERROR ( SimplSharpString S ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusSimplSharpDelegateThreadStartCode();
        
        __context__.SourceCodeLine = 559;
        /* Trace( "On Rx$") */ ; 
        __context__.SourceCodeLine = 560;
        RX__DOLLAR__  .UpdateValue ( S  .ToString()  ) ; 
        
        
    }
    finally { ObjectFinallyHandler(); }
    }
    
private void INIT (  SplusExecutionContext __context__ ) 
    { 
    
    __context__.SourceCodeLine = 565;
    // RegisterDelegate( CLIENT , ONRESPONSE , ONRECEIVE ) 
    CLIENT .OnResponse  = ONRECEIVE; ; 
    __context__.SourceCodeLine = 566;
    // RegisterDelegate( CLIENT , ONERROR , ONERROR ) 
    CLIENT .OnError  = ONERROR; ; 
    __context__.SourceCodeLine = 567;
    PSK  .UpdateValue ( ""  ) ; 
    __context__.SourceCodeLine = 568;
    IP  .UpdateValue ( ""  ) ; 
    
    }
    
public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 579;
        WaitForInitializationComplete ( ) ; 
        __context__.SourceCodeLine = 581;
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
    
    POLL_MAIN_INFO = new Crestron.Logos.SplusObjects.DigitalInput( POLL_MAIN_INFO__DigitalInput__, this );
    m_DigitalInputList.Add( POLL_MAIN_INFO__DigitalInput__, POLL_MAIN_INFO );
    
    TURN_POWER_ON = new Crestron.Logos.SplusObjects.DigitalInput( TURN_POWER_ON__DigitalInput__, this );
    m_DigitalInputList.Add( TURN_POWER_ON__DigitalInput__, TURN_POWER_ON );
    
    TURN_POWER_OFF = new Crestron.Logos.SplusObjects.DigitalInput( TURN_POWER_OFF__DigitalInput__, this );
    m_DigitalInputList.Add( TURN_POWER_OFF__DigitalInput__, TURN_POWER_OFF );
    
    TURN_MUTE_ON = new Crestron.Logos.SplusObjects.DigitalInput( TURN_MUTE_ON__DigitalInput__, this );
    m_DigitalInputList.Add( TURN_MUTE_ON__DigitalInput__, TURN_MUTE_ON );
    
    TURN_MUTE_OFF = new Crestron.Logos.SplusObjects.DigitalInput( TURN_MUTE_OFF__DigitalInput__, this );
    m_DigitalInputList.Add( TURN_MUTE_OFF__DigitalInput__, TURN_MUTE_OFF );
    
    SET_TV_CHANNEL = new Crestron.Logos.SplusObjects.DigitalInput( SET_TV_CHANNEL__DigitalInput__, this );
    m_DigitalInputList.Add( SET_TV_CHANNEL__DigitalInput__, SET_TV_CHANNEL );
    
    TV_CHANNEL_UP = new Crestron.Logos.SplusObjects.DigitalInput( TV_CHANNEL_UP__DigitalInput__, this );
    m_DigitalInputList.Add( TV_CHANNEL_UP__DigitalInput__, TV_CHANNEL_UP );
    
    TV_CHANNEL_DOWN = new Crestron.Logos.SplusObjects.DigitalInput( TV_CHANNEL_DOWN__DigitalInput__, this );
    m_DigitalInputList.Add( TV_CHANNEL_DOWN__DigitalInput__, TV_CHANNEL_DOWN );
    
    ERR = new Crestron.Logos.SplusObjects.DigitalOutput( ERR__DigitalOutput__, this );
    m_DigitalOutputList.Add( ERR__DigitalOutput__, ERR );
    
    NEWMAJORCH = new Crestron.Logos.SplusObjects.AnalogInput( NEWMAJORCH__AnalogSerialInput__, this );
    m_AnalogInputList.Add( NEWMAJORCH__AnalogSerialInput__, NEWMAJORCH );
    
    NEWMINORCH = new Crestron.Logos.SplusObjects.AnalogInput( NEWMINORCH__AnalogSerialInput__, this );
    m_AnalogInputList.Add( NEWMINORCH__AnalogSerialInput__, NEWMINORCH );
    
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
    
    
    TURN_POWER_ON.OnDigitalPush.Add( new InputChangeHandlerWrapper( TURN_POWER_ON_OnPush_0, false ) );
    TURN_POWER_OFF.OnDigitalPush.Add( new InputChangeHandlerWrapper( TURN_POWER_OFF_OnPush_1, false ) );
    TURN_MUTE_ON.OnDigitalPush.Add( new InputChangeHandlerWrapper( TURN_MUTE_ON_OnPush_2, false ) );
    TURN_MUTE_OFF.OnDigitalPush.Add( new InputChangeHandlerWrapper( TURN_MUTE_OFF_OnPush_3, false ) );
    SET_TV_CHANNEL.OnDigitalPush.Add( new InputChangeHandlerWrapper( SET_TV_CHANNEL_OnPush_4, false ) );
    SETVOLUMEVALUE.OnAnalogChange.Add( new InputChangeHandlerWrapper( SETVOLUMEVALUE_OnChange_5, false ) );
    PSK__DOLLAR__.OnSerialChange.Add( new InputChangeHandlerWrapper( PSK__DOLLAR___OnChange_6, false ) );
    IPADDRESS.OnSerialChange.Add( new InputChangeHandlerWrapper( IPADDRESS_OnChange_7, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    CLIENT  = new SimplSharpNetUtils.HTTPRequest();
    
    
}

public UserModuleClass_SONY_API_CONTROL ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint POLL_MAIN_INFO__DigitalInput__ = 0;
const uint TURN_POWER_ON__DigitalInput__ = 1;
const uint TURN_POWER_OFF__DigitalInput__ = 2;
const uint TURN_MUTE_ON__DigitalInput__ = 3;
const uint TURN_MUTE_OFF__DigitalInput__ = 4;
const uint SET_TV_CHANNEL__DigitalInput__ = 5;
const uint TV_CHANNEL_UP__DigitalInput__ = 6;
const uint TV_CHANNEL_DOWN__DigitalInput__ = 7;
const uint PSK__DOLLAR____AnalogSerialInput__ = 0;
const uint IPADDRESS__AnalogSerialInput__ = 1;
const uint TVCHANNEL__AnalogSerialInput__ = 2;
const uint PARSERX__AnalogSerialInput__ = 3;
const uint NEWMAJORCH__AnalogSerialInput__ = 4;
const uint NEWMINORCH__AnalogSerialInput__ = 5;
const uint SETVOLUMEVALUE__AnalogSerialInput__ = 6;
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
