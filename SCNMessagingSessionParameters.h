//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNMessagingMessagingServiceParameters, SCNMessagingStreamingServiceParameters, SCNMessagingTweaks, SCNMessagingUUID;

@interface SCNMessagingSessionParameters : NSObject
{
    _Bool _debug;
    SCNMessagingStreamingServiceParameters *_streamingServiceParameters;
    SCNMessagingMessagingServiceParameters *_messagingServiceParameters;
    NSString *_databaseLocation;
    SCNMessagingUUID *_userId;
    SCNMessagingTweaks *_tweaks;
}

+ (id)SessionParametersWithStreamingServiceParameters:(id)arg1 messagingServiceParameters:(id)arg2 databaseLocation:(id)arg3 userId:(id)arg4 debug:(_Bool)arg5 tweaks:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *databaseLocation; // @synthesize databaseLocation=_databaseLocation;
@property(readonly, nonatomic) _Bool debug; // @synthesize debug=_debug;
- (id)description;
- (id)initWithStreamingServiceParameters:(id)arg1 messagingServiceParameters:(id)arg2 databaseLocation:(id)arg3 userId:(id)arg4 debug:(_Bool)arg5 tweaks:(id)arg6;
@property(readonly, nonatomic) SCNMessagingMessagingServiceParameters *messagingServiceParameters; // @synthesize messagingServiceParameters=_messagingServiceParameters;
@property(readonly, nonatomic) SCNMessagingStreamingServiceParameters *streamingServiceParameters; // @synthesize streamingServiceParameters=_streamingServiceParameters;
@property(readonly, nonatomic) SCNMessagingTweaks *tweaks; // @synthesize tweaks=_tweaks;
@property(readonly, nonatomic) SCNMessagingUUID *userId; // @synthesize userId=_userId;

@end

