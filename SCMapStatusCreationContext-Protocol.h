//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSString;

@protocol SCMapStatusCreationContext <NSObject, SCComposerMarshallable>
- (void)didChangeOnboardingPageWithIndex:(double)arg1;
- (void)didChooseStatusOptionWithIdentifier:(NSString *)arg1 title:(NSString *)arg2 type:(double)arg3 index:(double)arg4 stickerCount:(double)arg5 actionId:(NSString *)arg6 prefix:(NSString *)arg7 creatorUserId:(NSString *)arg8;
- (void)didTapCreateBitmoji;
- (void)didTapCurrentStatusWithRequiresUpdate:(_Bool)arg1 statusId:(NSString *)arg2;
- (void)didTapDeleteOptionWithIdentifier:(NSString *)arg1 title:(NSString *)arg2 type:(double)arg3;
- (void)didTapDismissButton;
- (void)didTapLetsGo;
- (void)didTapPassportButton;
- (void)didTapReportOptionWithIdentifier:(NSString *)arg1 title:(NSString *)arg2 type:(double)arg3 creatorUserId:(NSString *)arg4;
- (void)didTapStatusOptionWithType:(double)arg1 index:(double)arg2 stickerCount:(double)arg3;
- (void)didViewCurrentStatusWithStatusId:(NSString *)arg1;
@end
