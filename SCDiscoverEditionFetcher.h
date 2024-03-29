//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCDiscoverChannels, SCSessionRequestManager;
@protocol SCPerforming;

@interface SCDiscoverEditionFetcher : NSObject
{
    SCDiscoverChannels *_discoverChannels;
    SCSessionRequestManager *_requestManager;
    NSString *_clientGeneratedEndpoint;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)fetchEdition:(id)arg1 publisher:(id)arg2 context:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchEdition:(id)arg1 publisher:(id)arg2 publisherId:(long long)arg3 subscribeState:(unsigned long long)arg4 enableUnskippableAd:(_Bool)arg5 context:(unsigned long long)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (id)initWithDiscoverChannels:(id)arg1 requestManager:(id)arg2 experimentManager:(id)arg3;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;

@end

