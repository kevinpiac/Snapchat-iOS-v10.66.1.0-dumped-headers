//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (SCLensSecurity)
+ (id)sc_lensSignatureValidationFailedErrorWithContentId:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3 contentSignature:(id)arg4;
+ (id)sc_lensSignatureValidationFailedErrorWithOptionalContentPath:(id)arg1;
+ (id)sc_lensSignatureValidationHashCheckingFailedErrorWithOptionalContentPath:(id)arg1 targetHash:(id)arg2 contentHash:(id)arg3;
+ (id)sc_lensSignatureValidationResourceTypeMismatchErrorWithResource:(id)arg1 destinationType:(long long)arg2;
+ (id)sc_lensSignatureValidationUnknownResourceTypeErrorWithResource:(id)arg1 destinationType:(long long)arg2 contentPath:(id)arg3;
@end
