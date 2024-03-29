//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensByIdRetrievable-Protocol.h"
#import "SCLensDataProviderProtocol-Protocol.h"
#import "SCLensPreselectedLensContainerProtocol-Protocol.h"

@class NSArray, NSString, SCLens;

@protocol SCLensCameraScreenDataProviderProtocol <SCLensDataProviderProtocol, SCLensByIdRetrievable, SCLensPreselectedLensContainerProtocol>
- (NSString *)applicableContext;
- (NSArray *)categoryIds;
- (SCLens *)firstApplicableLens;
- (NSArray *)lenses;
- (void)setCategoryIds:(NSArray *)arg1 devicePosition:(unsigned long long)arg2;
- (void)setCategoryIds:(NSArray *)arg1 devicePosition:(unsigned long long)arg2 applicableContext:(NSString *)arg3;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)setSelectedLens:(SCLens *)arg1;
@property(nonatomic) _Bool showBirthdayReplyLens;
- (void)warmUp;
@end

