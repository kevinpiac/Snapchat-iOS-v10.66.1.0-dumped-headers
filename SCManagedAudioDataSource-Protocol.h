//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SCAudioConfiguration, SCQueuePerformer;
@protocol SCManagedAudioDataSourceListener;

@protocol SCManagedAudioDataSource
- (void)addListener:(id <SCManagedAudioDataSourceListener>)arg1;
@property(readonly, nonatomic) _Bool isStreaming;
@property(readonly, nonatomic) SCQueuePerformer *performer;
- (void)removeListener:(id <SCManagedAudioDataSourceListener>)arg1;
- (void)startStreamingWithAudioConfiguration:(SCAudioConfiguration *)arg1;
- (void)stopStreaming;
@end
