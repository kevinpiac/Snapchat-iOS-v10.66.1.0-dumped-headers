//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCCharmsDescription : NSObject <NSCopying>
{
    NSString *_descriptionTemplate;
    NSArray *_descriptionVariables;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *descriptionTemplate; // @synthesize descriptionTemplate=_descriptionTemplate;
@property(readonly, copy, nonatomic) NSArray *descriptionVariables; // @synthesize descriptionVariables=_descriptionVariables;
- (unsigned long long)hash;
- (id)initWithDescriptionTemplate:(id)arg1 descriptionVariables:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

