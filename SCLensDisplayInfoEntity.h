//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SCLensDisplayInfoEntity : NSObject
{
    NSString *_name;
    NSString *_unit;
    NSNumber *_value;
    unsigned long long _position;
}

+ (id)entitiesOrder;
+ (id)fpsDisplayInfoEntityWithValue:(id)arg1;
+ (id)ramDisplayInfoEntityWithValue:(id)arg1;
+ (id)sizeDisplayInfoEntityWithValue:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *formattedValue;
- (id)initWithName:(id)arg1 value:(id)arg2 position:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;

@end
