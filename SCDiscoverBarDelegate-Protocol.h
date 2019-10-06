//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCDiscoverBarView, SCDiscoverDSnapExpirationValidator, SCDiscoverMediaBlobMetadata, SCUserSession;

@protocol SCDiscoverBarDelegate <NSObject>
- (SCDiscoverDSnapExpirationValidator *)dSnapValidator;
- (SCUserSession *)dUserSession;
- (void)handleRetryOnBar:(SCDiscoverBarView *)arg1;
- (void)handleTapToNavigateOnBar:(SCDiscoverBarView *)arg1 withDiscoverMetadata:(SCDiscoverMediaBlobMetadata *)arg2;
@end
