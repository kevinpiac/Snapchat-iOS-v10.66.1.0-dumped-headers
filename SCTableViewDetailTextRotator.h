//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_source;

@interface SCTableViewDetailTextRotator : NSObject
{
    NSMapTable *_cellAuxTextInfo;
    NSObject<OS_dispatch_source> *_auxTextRotationTimer;
}

- (void).cxx_destruct;
- (void)_rotateCellsForTextState:(_Bool)arg1;
- (void)addAuxTextForCell:(id)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
- (id)init;
- (void)removeCell:(id)arg1;

@end

