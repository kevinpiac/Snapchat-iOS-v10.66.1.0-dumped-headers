//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class NSArray, NSMutableData, SCWeakTimer;

@interface SCSpectaclesTaskDownloadLogs : SCSpectaclesTask
{
    _Bool _finished;
    _Bool _didTimeOut;
    NSArray *_logFileList;
    long long _currentLogIndex;
    NSMutableData *_partialLog;
    CDUnknownBlockType _callback;
    SCWeakTimer *_weakTimer;
}

- (void).cxx_destruct;
- (void)_appendLogData:(id)arg1 forLog:(id)arg2;
- (void)_clearDirectory;
- (id)_filepathsInLogDirectory;
- (void)_handleCallbackWithLogs:(id)arg1;
- (void)_markFinished;
- (void)_resetWeakTimer;
- (void)_timedOut;
- (id)cacheDirectory;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long currentLogIndex; // @synthesize currentLogIndex=_currentLogIndex;
@property(nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
- (id)getLogRequestFilename:(id)arg1 range:(struct _NSRange)arg2;
- (void)handleCallbackAfterDownloadingLogs;
- (_Bool)handleResponse:(id)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSArray *logFileList; // @synthesize logFileList=_logFileList;
- (id)logListRequest;
- (id)nextRequest:(long long)arg1;
@property(retain, nonatomic) NSMutableData *partialLog; // @synthesize partialLog=_partialLog;
@property(retain, nonatomic) SCWeakTimer *weakTimer; // @synthesize weakTimer=_weakTimer;

@end

