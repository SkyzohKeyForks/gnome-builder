/* ide-transfer-row.h
 *
 * Copyright (C) 2016 Christian Hergert <chergert@redhat.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IDE_TRANSFER_ROW_H
#define IDE_TRANSFER_ROW_H

#include <gtk/gtk.h>

#include "ide-transfer.h"

G_BEGIN_DECLS

#define IDE_TYPE_TRANSFER_ROW (ide_transfer_row_get_type())

G_DECLARE_FINAL_TYPE (IdeTransferRow, ide_transfer_row, IDE, TRANSFER_ROW, GtkListBoxRow)

IdeTransfer *ide_transfer_row_get_transfer (IdeTransferRow *self);
void         ide_transfer_row_set_transfer (IdeTransferRow *self,
                                            IdeTransfer    *transfer);

G_END_DECLS

#endif /* IDE_TRANSFER_ROW_H */
