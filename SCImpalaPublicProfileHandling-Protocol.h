//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@protocol SCImpalaPublicProfileHandling <NSObject, SCComposerMarshallable>
- (void)getStateWithCallback:(void (^)(SCImpalaPublicProfileState *, NSString *))arg1;
- (void (^)(void))observeWithCallback:(void (^)(void))arg1;
- (void)updateOptInNotificationsWithOptedIn:(_Bool)arg1 callback:(void (^)(NSString *))arg2;
- (void)updateSubscribedWithSubscribed:(_Bool)arg1 callback:(void (^)(NSString *))arg2;
@end

