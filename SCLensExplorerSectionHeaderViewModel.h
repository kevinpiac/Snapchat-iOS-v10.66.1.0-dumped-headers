//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCLensExplorerHeaderViewDebugData, UIColor, UIFont;

@interface SCLensExplorerSectionHeaderViewModel : NSObject <NSCopying, NSCoding>
{
    NSString *_sectionName;
    NSString *_countText;
    UIColor *_textColor;
    UIFont *_textFont;
    SCLensExplorerHeaderViewDebugData *_debugData;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *countText; // @synthesize countText=_countText;
@property(readonly, copy, nonatomic) SCLensExplorerHeaderViewDebugData *debugData; // @synthesize debugData=_debugData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionName:(id)arg1 countText:(id)arg2 textColor:(id)arg3 textFont:(id)arg4 offset:(struct CGPoint)arg5 debugData:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;

@end

