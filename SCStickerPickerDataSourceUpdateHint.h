//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface SCStickerPickerDataSourceUpdateHint : NSObject
{
    NSIndexSet *_inserts;
    NSIndexSet *_updates;
    NSIndexSet *_deletes;
}

+ (id)updateHintFromMergingHints:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSIndexSet *deletes; // @synthesize deletes=_deletes;
- (id)description;
- (id)initWithInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3;
@property(readonly, copy, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
@property(readonly, copy, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;

@end

