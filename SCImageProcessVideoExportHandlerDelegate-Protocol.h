//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCImageProcessVideoExportHandler;

@protocol SCImageProcessVideoExportHandlerDelegate <NSObject>
- (void)videoExportHandler:(id <SCImageProcessVideoExportHandler>)arg1 didFinishWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)videoExportHandler:(id <SCImageProcessVideoExportHandler>)arg1 didProgressWithPresentationTime:(CDStruct_1b6d18a9)arg2;
@end

