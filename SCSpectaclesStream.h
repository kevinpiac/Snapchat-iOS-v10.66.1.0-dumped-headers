//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSArray, NSInputStream, NSMutableData, NSOutputStream, NSString, NSThread;
@protocol SCPerforming, SCSpectaclesStreamDelegate;

@interface SCSpectaclesStream : NSObject <NSStreamDelegate>
{
    _Bool _logPackets;
    id <SCSpectaclesStreamDelegate> _delegate;
    NSArray *_associatedObjects;
    NSMutableData *_writeBuffer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id <SCPerforming> _parsePerformer;
    NSThread *_streamThread;
}

+ (id)streamWithAccessory:(id)arg1;
+ (id)streamWithUrl:(id)arg1;
- (void).cxx_destruct;
- (void)_readDataInternal;
- (void)_sendErrorForStream:(id)arg1;
- (void)_threadMain;
- (void)_writeData:(id)arg1;
- (void)_writeDataInternal;
@property(retain, nonatomic) NSArray *associatedObjects; // @synthesize associatedObjects=_associatedObjects;
@property(nonatomic) __weak id <SCSpectaclesStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) _Bool logPackets; // @synthesize logPackets=_logPackets;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) id <SCPerforming> parsePerformer; // @synthesize parsePerformer=_parsePerformer;
@property(retain, nonatomic) NSThread *streamThread; // @synthesize streamThread=_streamThread;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
- (void)setup;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)teardown;
- (void)writeData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

