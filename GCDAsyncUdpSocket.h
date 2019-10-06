//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCDAsyncUdpSendPacket, NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GCDAsyncUdpSocket : NSObject
{
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    CDUnknownBlockType receiveFilterBlock;
    NSObject<OS_dispatch_queue> *receiveFilterQueue;
    _Bool receiveFilterAsync;
    CDUnknownBlockType sendFilterBlock;
    NSObject<OS_dispatch_queue> *sendFilterQueue;
    _Bool sendFilterAsync;
    unsigned int flags;
    unsigned short config;
    unsigned short max4ReceiveSize;
    unsigned int max6ReceiveSize;
    int socket4FD;
    int socket6FD;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *send4Source;
    NSObject<OS_dispatch_source> *send6Source;
    NSObject<OS_dispatch_source> *receive4Source;
    NSObject<OS_dispatch_source> *receive6Source;
    NSObject<OS_dispatch_source> *sendTimer;
    GCDAsyncUdpSendPacket *currentSend;
    NSMutableArray *sendQueue;
    unsigned long long socket4FDBytesAvailable;
    unsigned long long socket6FDBytesAvailable;
    unsigned int pendingFilterOperations;
    NSData *cachedLocalAddress4;
    NSString *cachedLocalHost4;
    unsigned short cachedLocalPort4;
    NSData *cachedLocalAddress6;
    NSString *cachedLocalHost6;
    unsigned short cachedLocalPort6;
    NSData *cachedConnectedAddress;
    NSString *cachedConnectedHost;
    unsigned short cachedConnectedPort;
    int cachedConnectedFamily;
    void *IsOnSocketQueueOrTargetQueueKey;
    CDStruct_4210025a streamContext;
    struct __CFReadStream *readStream4;
    struct __CFReadStream *readStream6;
    struct __CFWriteStream *writeStream4;
    struct __CFWriteStream *writeStream6;
    id userData;
}

+ (void)addStreamListener:(id)arg1;
+ (int)familyFromAddress:(id)arg1;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(int *)arg3 fromAddress:(id)arg4;
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (id)hostFromAddress:(id)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (void)ignore:(id)arg1;
+ (_Bool)isIPv4Address:(id)arg1;
+ (_Bool)isIPv6Address:(id)arg1;
+ (void)listenerThread;
+ (unsigned short)portFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (void)removeStreamListener:(id)arg1;
+ (void)startListenerThreadIfNeeded;
- (void).cxx_destruct;
- (_Bool)addStreamsToRunLoop:(id *)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)asyncResolveHost:(id)arg1 port:(unsigned short)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)badConfigError:(id)arg1;
- (id)badParamError:(id)arg1;
- (_Bool)beginReceiving:(id *)arg1;
- (_Bool)bindToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)bindToPort:(unsigned short)arg1 error:(id *)arg2;
- (_Bool)bindToPort:(unsigned short)arg1 interface:(id)arg2 error:(id *)arg3;
- (void)close;
- (void)closeAfterSending;
- (void)closeReadAndWriteStreams;
- (void)closeSocket4;
- (void)closeSocket6;
- (void)closeSockets;
- (void)closeWithError:(id)arg1;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)connectWithAddress4:(id)arg1 error:(id *)arg2;
- (_Bool)connectWithAddress6:(id)arg1 error:(id *)arg2;
- (id)connectedAddress;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (void)convertIntefaceDescription:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (void)convertNumericHost:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (_Bool)createReadAndWriteStreams:(id *)arg1;
- (_Bool)createSocket4:(_Bool)arg1 socket6:(_Bool)arg2 error:(id *)arg3;
- (_Bool)createSockets:(id *)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)doPreSend;
- (void)doReceive;
- (void)doReceiveEOF;
- (void)doSend;
- (void)doSendTimeout;
- (_Bool)enableBackgroundingOnSockets;
- (_Bool)enableBroadcast:(_Bool)arg1 error:(id *)arg2;
- (_Bool)enableReusePort:(_Bool)arg1 error:(id *)arg2;
- (void)endCurrentSend;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)gaiError:(int)arg1;
- (int)getAddress:(id *)arg1 error:(id *)arg2 fromAddresses:(id)arg3;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (_Bool)getLocalAddress:(id *)arg1 host:(id *)arg2 port:(unsigned short *)arg3 forSocket:(int)arg4 withFamily:(int)arg5;
- (unsigned int)indexOfInterfaceAddr4:(id)arg1;
- (unsigned int)indexOfInterfaceAddr6:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithSocketQueue:(id)arg1;
- (_Bool)isClosed;
- (_Bool)isConnected;
- (_Bool)isConnectedToAddress4:(id)arg1;
- (_Bool)isConnectedToAddress6:(id)arg1;
- (_Bool)isIPVersionNeutral;
- (_Bool)isIPv4;
- (_Bool)isIPv4Enabled;
- (_Bool)isIPv4Preferred;
- (_Bool)isIPv6;
- (_Bool)isIPv6Enabled;
- (_Bool)isIPv6Preferred;
- (_Bool)joinMulticastGroup:(id)arg1 error:(id *)arg2;
- (_Bool)joinMulticastGroup:(id)arg1 onInterface:(id)arg2 error:(id *)arg3;
- (_Bool)leaveMulticastGroup:(id)arg1 error:(id *)arg2;
- (_Bool)leaveMulticastGroup:(id)arg1 onInterface:(id)arg2 error:(id *)arg3;
- (id)localAddress;
- (id)localAddress_IPv4;
- (id)localAddress_IPv6;
- (id)localHost;
- (id)localHost_IPv4;
- (id)localHost_IPv6;
- (unsigned short)localPort;
- (unsigned short)localPort_IPv4;
- (unsigned short)localPort_IPv6;
- (void)markSocketQueueTargetQueue:(id)arg1;
- (unsigned short)maxReceiveIPv4BufferSize;
- (unsigned int)maxReceiveIPv6BufferSize;
- (void)maybeConnect;
- (void)maybeDequeueSend;
- (void)maybeUpdateCachedConnectedAddressInfo;
- (void)maybeUpdateCachedLocalAddress4Info;
- (void)maybeUpdateCachedLocalAddress6Info;
- (void)notifyDidCloseWithError:(id)arg1;
- (void)notifyDidConnectToAddress:(id)arg1;
- (void)notifyDidNotConnect:(id)arg1;
- (void)notifyDidNotSendDataWithTag:(long long)arg1 dueToError:(id)arg2;
- (void)notifyDidReceiveData:(id)arg1 fromAddress:(id)arg2 withFilterContext:(id)arg3;
- (void)notifyDidSendDataWithTag:(long long)arg1;
- (_Bool)openStreams:(id *)arg1;
- (id)otherError:(id)arg1;
- (void)pauseReceiving;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (_Bool)performMulticastRequest:(int)arg1 forGroup:(id)arg2 onInterface:(id)arg3 error:(id *)arg4;
- (_Bool)preBind:(id *)arg1;
- (_Bool)preConnect:(id *)arg1;
- (_Bool)preJoin:(id *)arg1;
- (_Bool)preOp:(id *)arg1;
- (struct __CFReadStream *)readStream;
- (_Bool)receiveOnce:(id *)arg1;
- (_Bool)registerForStreamCallbacks:(id *)arg1;
- (void)removeStreamsFromRunLoop;
- (void)resumeReceive4Source;
- (void)resumeReceive6Source;
- (void)resumeSend4Source;
- (void)resumeSend6Source;
- (void)sendData:(id)arg1 toAddress:(id)arg2 withTimeout:(double)arg3 tag:(long long)arg4;
- (void)sendData:(id)arg1 toHost:(id)arg2 port:(unsigned short)arg3 withTimeout:(double)arg4 tag:(long long)arg5;
- (void)sendData:(id)arg1 withTag:(long long)arg2;
- (void)sendData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (id)sendTimeoutError;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(_Bool)arg3;
- (void)setDelegate:(id)arg1 synchronously:(_Bool)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDelegateQueue:(id)arg1 synchronously:(_Bool)arg2;
- (void)setIPVersionNeutral;
- (void)setIPv4Enabled:(_Bool)arg1;
- (void)setIPv6Enabled:(_Bool)arg1;
- (void)setMaxReceiveIPv4BufferSize:(unsigned short)arg1;
- (void)setMaxReceiveIPv6BufferSize:(unsigned int)arg1;
- (void)setPreferIPv4;
- (void)setPreferIPv6;
- (void)setReceiveFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setReceiveFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2 isAsynchronous:(_Bool)arg3;
- (void)setSendFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setSendFilter:(CDUnknownBlockType)arg1 withQueue:(id)arg2 isAsynchronous:(_Bool)arg3;
- (void)setUserData:(id)arg1;
- (void)setupSendAndReceiveSourcesForSocket4;
- (void)setupSendAndReceiveSourcesForSocket6;
- (void)setupSendTimerWithTimeout:(double)arg1;
- (int)socket4FD;
- (int)socket6FD;
- (id)socketClosedError;
- (int)socketFD;
- (void)suspendReceive4Source;
- (void)suspendReceive6Source;
- (void)suspendSend4Source;
- (void)suspendSend6Source;
- (void)synchronouslySetDelegate:(id)arg1;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)synchronouslySetDelegateQueue:(id)arg1;
- (void)unmarkSocketQueueTargetQueue:(id)arg1;
- (id)userData;
- (struct __CFWriteStream *)writeStream;

@end
