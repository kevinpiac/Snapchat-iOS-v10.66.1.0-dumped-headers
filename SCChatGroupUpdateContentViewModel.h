//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCChatGroupUpdateContentViewModel : NSObject <NSCopying>
{
    NSAttributedString *_groupUpdateAttributedText;
    double _height;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *groupUpdateAttributedText; // @synthesize groupUpdateAttributedText=_groupUpdateAttributedText;
- (unsigned long long)hash;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (id)initWithGroupUpdateAttributedText:(id)arg1 height:(double)arg2;
- (_Bool)isEqual:(id)arg1;

@end

