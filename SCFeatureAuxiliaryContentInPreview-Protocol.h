//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SCFeatureAuxiliaryContentInPreview
- (void)backUpNow;
- (void)deactivate;
- (void)hideTooltip;
@property(nonatomic, getter=isDepthPreparationEnabled) _Bool depthPreparationEnabled;
- (void)loadContentWithCompletionHandler:(void (^)(NSError *))arg1;
@property(readonly, nonatomic) long long promptFilterType;
@end

