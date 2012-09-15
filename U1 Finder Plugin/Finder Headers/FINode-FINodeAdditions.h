/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PFDesktopServicesPriv.h"
#import "IKImageBrowserDatasourceItemPrivate-Protocol.h"
#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL;

@interface FINode (FINodeAdditions) <QLPreviewItem, IKImageBrowserDatasourceItemPrivate>
- (id)statusInfoForCell:(id)arg1;
- (id)statusInfo;
- (double)statusProgress;
- (id)statusString;
- (unsigned long long)ubiquityStatus;
- (id)copyImageRepresentation:(id *)arg1 options:(id)arg2;
- (id)IKImageRepresentationWithType:(id)arg1;
- (struct OpaqueIconRef *)createAlternativeIconRepresentationWithOptions:(id)arg1;
- (BOOL)isDimmed;
- (struct __CFDictionary *)quickLookThumbnailOptions;
- (id)imageLabel;
- (id)imageTitle;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)imageUIDForViewIdentifier:(id)arg1;
- (id)imageRepresentationTypeForViewIdentifier:(id)arg1;
- (BOOL)isInIconView;
- (struct CGImage *)createImageForMaximumSize:(struct CGSize)arg1 options:(struct __CFDictionary *)arg2;
- (id)previewItemLocalizedDescription;
- (id)previewItemDisplayName;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (id)size:(BOOL)arg1;
- (struct TFENode)feNodeFollowingAliasChainAsyncWithTarget:(id)arg1 okToLogin:(BOOL)arg2 tryToFixIfBroken:(BOOL)arg3;

// Remaining properties
@property(readonly) id previewItemDisplayState;
@end

