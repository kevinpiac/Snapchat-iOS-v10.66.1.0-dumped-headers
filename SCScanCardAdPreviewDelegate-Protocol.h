//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCAdDataSource, SCScanCardTableViewCell;
@protocol SCScanCardAdPreviewProtocol;

@protocol SCScanCardAdPreviewDelegate <NSObject>
- (void)adpreviewCard:(SCScanCardTableViewCell<SCScanCardAdPreviewProtocol> *)arg1 didTapOpenAd:(SCAdDataSource *)arg2;
@end

