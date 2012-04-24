//
//  CWColumnTableViewCell.h
//  CWUIKit
//  Created by Fredrik Olsson 
//
//  Copyright (c) 2011, Jayway AB All rights reserved.
//  Copyright (c) 2012, Fredrik Olsson All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Jayway AB nor the names of its contributors may 
//       be used to endorse or promote products derived from this software 
//       without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL JAYWAY AB BE LIABLE FOR ANY DIRECT, INDIRECT, 
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
//  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF 
//  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <UIKit/UIKit.h>


/*!
 * @abstract A CWColumnTableViewCell is the UITableViewCell equivalent for column table views.
 *
 * @discussion Column table view cell is designed both in it's API and it's visual appearance to
 *             mimic a UIKit table view cell  as closely as possible. A CWColumnTableViewCell 
 *             table view configured with a single column is indistinguishable from a 
 *             UITableViewCell.
 */
@interface CWColumnTableViewCell : UIView 

@property (nonatomic, readonly, assign) UITableViewCellStyle style;
@property (nonatomic, assign) UITableViewStyle tableViewStyle;
@property (nonatomic, assign) UITableViewCellSeparatorStyle separatorStyle;
@property (nonatomic, strong) UIColor* separatorColor;
@property (nonatomic, readonly, copy) NSString* reuseIdentifier;
@property (nonatomic, readonly, strong) UIView* contentView;
@property (nonatomic, strong) UIView* backgroundView;
@property (nonatomic, strong) UIView* selectedBackgroundView;
@property (nonatomic, readonly, strong) UILabel* textLabel;
@property (nonatomic, readonly, strong) UIImageView* imageView;
@property (nonatomic, readonly, strong) UILabel* detailTextLabel;
@property (nonatomic, strong) UIView* accessoryView;
@property (nonatomic, getter=isSelected, assign) BOOL selected;
@property (nonatomic, getter=isHighlighted, assign) BOOL highlighted;
@property (nonatomic, getter=isEditing, assign) BOOL editing;

-(id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString*)reuseIdentifier;

-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;

- (void)prepareForReuse;

@end


@interface CWColumnTableViewCell (CWSubviewOverrides)

-(UIColor*)textLabelTextColor;
-(UIColor*)detailTextLabelTextColor;

-(UILabel*)defaultTextLabel;
-(UIImageView*)defaultImageView;
-(UILabel*)defaultDetailTextLabel;

@end

@interface CWColumnTableViewCell (CWLayoutOverrides)

-(CGRect)rectForMainTextLabel:(BOOL)isMainTextLabel;
-(CGRect)rectForTextLabel;
-(CGRect)rectForImageView;
-(CGRect)rectForDetailTextLabel;
-(CGRect)rectForContentView;
-(CGRect)rectForAccessoryView;

@end
